#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "backend.h"
#include "regs.h"
#include "target.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "df.h"
#include "predict.h"
#include "tree-pass.h"
#include "tree.h"
#include "tm_p.h"
#include "optabs.h"
#include "recog.h"
#include "cfgrtl.h"

#define IN_TARGET_CODE 1

namespace {

/*
  1. preprocessing:
    1.1. if there is no push rtx, then just return. e.g.
    (note 5 1 22 2 [bb 2] NOTE_INSN_BASIC_BLOCK)
    (insn/f 22 5 23 2 (set (reg/f:SI 2 sp)
      (plus:SI (reg/f:SI 2 sp)
	(const_int -32 [0xffffffffffffffe0])))
    (nil))
    (note 23 22 2 2 NOTE_INSN_PROLOGUE_END)
    1.2. if push rtx exists, then we compute the number of
    pushed s-registers, n_sreg.

  push rtx should be find before NOTE_INSN_PROLOGUE_END tag

  [2 and 3 happend simultaneously]
  2. find valid move pattern, mv sN, aN, where N < n_sreg,
    and aN is not used the move pattern, and sN is not
    defined before the move pattern (from prologue to the
    position of move pattern).
  3. analysis use and reach of every instruction from prologue
    to the position of move pattern.
    if any sN is used, then we mark the corresponding argument list
    candidate as invalid.
    e.g.
	push  {ra,s0-s3}, {}, -32
	sw	s0,44(sp) # s0 is used, then argument list is invalid
	mv	a0,a5     # a0 is defined, then argument list is invalid
	...
	mv	s0,a0
	mv	s1,a1
	mv	s2,a2

  4. if there is a valid argument list, then replace the pop
    push parallel insn, and delete mv pattern.
     if not, skip.
*/

static void
emit_zcmp_popret (rtx_insn *pop_rtx,
		  rtx_insn **candidates,
		  basic_block bb)
{
  bool gen_popretz_p = candidates [0];
  bool gen_popret_p = candidates [2];

  if (!(gen_popret_p || gen_popretz_p))
    return;

  gcc_assert ((gen_popret_p && !gen_popretz_p)
      || (gen_popretz_p && gen_popret_p));

  rtx pop_pat = PATTERN (pop_rtx);
  unsigned pop_idx = 0, popret_idx = 0;
  unsigned n_pop_par = XVECLEN (pop_pat, 0);
  unsigned n_popret_par = n_pop_par
	+ (gen_popretz_p ? 2 : 0)
	+ (gen_popret_p ? 2 : 0);

  rtx popret_par = gen_rtx_PARALLEL (VOIDmode,
	  rtvec_alloc (n_popret_par));

  /* return zero pattern */
  if (gen_popretz_p)
    {
      XVECEXP (popret_par, 0, 0) = PATTERN (candidates[0]);
      XVECEXP (popret_par, 0, 1) = PATTERN (candidates[1]);
      popret_idx += 2;
      delete_insn (candidates[0]);
      delete_insn (candidates[1]);
    }

  /* copy pop paruence.  */
  for (; pop_idx < n_pop_par;
      pop_idx ++, popret_idx ++)
    {
      XVECEXP (popret_par, 0, popret_idx) =
	  XVECEXP (pop_pat, 0, pop_idx);
    }

  /* ret pattern.  */
  rtx ret_pat = PATTERN (candidates[2]);
  gcc_assert (GET_CODE (ret_pat) == PARALLEL);

  for (int i = 0; i < XVECLEN (ret_pat, 0);
      i++, popret_idx++)
  {
    XVECEXP (popret_par, 0, popret_idx) =
	XVECEXP (ret_pat, 0, i);
  }

  rtx_insn *insn = emit_jump_insn_after (
	  popret_par,
	  BB_END (bb));
  JUMP_LABEL (insn) = simple_return_rtx;

  REG_NOTES (insn) = REG_NOTES (pop_rtx);
  RTX_FRAME_RELATED_P (insn) = 1;

  if (dump_file)
    {
      fprintf(dump_file, "new insn:\n");
      print_rtl (dump_file, insn);
    }

  delete_insn (candidates [2]);
  delete_insn (pop_rtx);
}

static void
zcmp_popret (void)
{
  basic_block bb;
  rtx_insn *insn = NULL, *pop_rtx = NULL;
  rtx_insn *pop_candidates[3] = {NULL, };
  /*
    find NOTE_INSN_EPILOGUE_BEG, but pop_rtx not found => return
    find NOTE_INSN_EPILOGUE_BEG, and pop_rtx is found => looking for a0
  */

  FOR_EACH_BB_REVERSE_FN (bb, cfun)
  {
    FOR_BB_INSNS_REVERSE (bb, insn)
      {
	if (!pop_rtx
	    && NOTE_P (insn)
	    && NOTE_KIND (insn) == NOTE_INSN_EPILOGUE_BEG)
	  return;

	if (NOTE_P (insn)
	    && NOTE_KIND (insn) == NOTE_INSN_FUNCTION_BEG)
	  {
	    if (pop_rtx)
	      emit_zcmp_popret (pop_rtx, pop_candidates, bb);
	    return;
	  };

	if (!(NONDEBUG_INSN_P (insn)
	    || CALL_P (insn)))
	  continue;

	rtx pop_pat = PATTERN (insn);

	if (GET_CODE (pop_pat) == PARALLEL
	    && riscv_valid_stack_push_pop_p (pop_pat, false))
	  {
	    pop_rtx = insn;
	    continue;
	  }

	/* pattern for `ret`.  */
	if (JUMP_P (insn)
	    && GET_CODE (pop_pat) == PARALLEL
	    && XVECLEN (pop_pat, 0) == 2
	    && GET_CODE (XVECEXP (pop_pat, 0, 0)) == SIMPLE_RETURN
	    && GET_CODE (XVECEXP (pop_pat, 0, 1)) == USE)
	  {
	    rtx use_reg = XEXP (XVECEXP (pop_pat, 0, 1), 0);
	    if (REG_P (use_reg)
	      && REGNO (use_reg) == RETURN_ADDR_REGNUM)
	      {
		pop_candidates [2] = insn;
		continue;
	      }
	  }

	if (!pop_rtx)
	  continue;

	/* pattern for return value.  */
	if (!pop_candidates [0]
	    && GET_CODE (pop_pat) == USE)
	  {
	    rtx_insn *set_insn = PREV_INSN (insn);
	    rtx pat_set = PATTERN (set_insn);

	    if (riscv_check_regno (XEXP (pop_pat, 0),
		    RETURN_VALUE_REGNUM)
		&& insn
		&& pat_set != NULL
		&& GET_CODE (pat_set) == SET
		&& riscv_check_regno (SET_DEST (pat_set),
		       RETURN_VALUE_REGNUM)
		&& CONST_INT_P (SET_SRC (pat_set))
		&& INTVAL (SET_SRC (pat_set)) == 0)
	      {
		pop_candidates [0] = set_insn;
		pop_candidates [1] = insn;
		break;
	      }
	  }
      }

    if (pop_rtx)
      {
	emit_zcmp_popret (pop_rtx, pop_candidates, bb);
	return;
      }
  }
}

const pass_data pass_data_zcmp_popret =
{
  RTL_PASS, /* type */
  "zcmp-popret", /* name */
  OPTGROUP_NONE, /* optinfo_flags */
  TV_NONE, /* tv_id */
  0, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  0, /* todo_flags_finish */
};

class pass_zcmp_popret : public rtl_opt_pass
{
public:
  pass_zcmp_popret (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_zcmp_popret, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    { return TARGET_ZCMP; }
  virtual unsigned int execute (function *)
    {
      zcmp_popret ();
      return 0;
    }
}; // class pass_zcmp_popret

} // anon namespace

rtl_opt_pass *
make_pass_zcmp_popret (gcc::context *ctxt)
{
  return new pass_zcmp_popret (ctxt);
}
