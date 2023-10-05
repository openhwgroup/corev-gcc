#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "target.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "function.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "tm_p.h"
#include "tree-pass.h"
#include "df.h"

/* Creating doloop_begin patterns fully formed with a named pattern
   reusults in the labels they use to refer to the loop start being
   removed from the insn list during loop_done pass, so instead we
   put the doloop_end insn in the place of the label, and patch this
   up after the loop_done pass.
   Also, while being at that, replace the pseudo reg used for the
   counter in doloop_begin / doloop_end by the appropriate hard register,
   since lra doesn't find the right solution.  */

namespace {

const pass_data pass_data_riscv_doloop_begin =
{
  RTL_PASS, /* type */
  "riscv_doloop_begin", /* name */
  OPTGROUP_LOOP, /* optinfo_flags */
  TV_LOOP_DOLOOP, /* tv_id */
  0, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  0, /* todo_flags_finish */
};

class pass_riscv_doloop_begin : public rtl_opt_pass
{
public:
  pass_riscv_doloop_begin (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_riscv_doloop_begin, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    {
      return TARGET_XCVHWLP
	&& flag_branch_on_count_reg && optimize > 0;
    }
  virtual unsigned int execute (function *);

private:
  typedef int_hash <HOST_WIDE_INT, 0> regno_hash;
  typedef hash_map <regno_hash, int> regno_map;

  regno_map * analyze (basic_block bb);
  void transform (regno_map *m, basic_block bb);
  bool get_si_mem_base_reg (rtx mem, rtx *addr, bool *extend);
}; // class pass_riscv_doloop_begin

unsigned int
pass_riscv_doloop_begin::execute (function *)
{
  for (rtx_insn *insn = get_insns (); insn; insn = NEXT_INSN (insn))
    {
      if (!NONJUMP_INSN_P (insn)
	  || recog_memoized (insn) != CODE_FOR_doloop_begin_i)
	continue;
      rtx *lref_loc = &SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      rtx_insn *end_insn
	= as_a <rtx_insn *> (XEXP (XVECEXP (*lref_loc, 0, 0), 0));
      rtx pat = PATTERN (end_insn);
      rtx start_label_ref = XEXP (SET_SRC (XVECEXP (pat, 0, 0)), 1);
      start_label_ref
	= gen_rtx_LABEL_REF (SImode, label_ref_label (start_label_ref));
      *lref_loc = start_label_ref;
      add_label_op_ref (insn, start_label_ref);
      rtx *reg_loc0 = &SET_DEST (XVECEXP (PATTERN (insn), 0, 2));
      rtx *reg_loc1 = &XEXP (XEXP (SET_SRC (XVECEXP (pat, 0, 0)), 0), 0);
      rtx *reg_loc2 = &XEXP (SET_SRC (XVECEXP (pat, 0, 1)), 0);
      rtx *reg_loc3 = &SET_DEST (XVECEXP (pat, 0, 1));
      gcc_assert (rtx_equal_p (*reg_loc0, *reg_loc1));
      gcc_assert (rtx_equal_p (*reg_loc0, *reg_loc2));
      gcc_assert (rtx_equal_p (*reg_loc0, *reg_loc3));
      rtx start_reg = SET_DEST (XVECEXP (PATTERN (insn), 0, 0));
      rtx hreg = gen_rtx_REG (SImode,
			      LPCOUNT0_REGNUM
			      + REGNO (start_reg) - LPSTART0_REGNUM);
      *reg_loc0 = hreg;
      *reg_loc1 = hreg;
      *reg_loc2 = hreg;
      *reg_loc3 = hreg;
      df_insn_rescan (insn);
      df_insn_rescan (end_insn);
    }

  return 0;
}

} // anon namespace

rtl_opt_pass *
make_pass_riscv_doloop_begin (gcc::context *ctxt)
{
  return new pass_riscv_doloop_begin (ctxt);
}

/* We'd like to check that there's no flow control inside the loop
   except for nested HW loops and the final branch back to the loop latch.
   However, we can't do that becaue we are not being passed the loop
   structure.  */
bool
riscv_can_use_doloop_p (const widest_int &, const widest_int &,
			unsigned int loop_depth, bool entered_at_top)
{
  if (!TARGET_XCVHWLP)
    return false;
  if (loop_depth > 2)
    return false;
  if (!entered_at_top)
    return false;
  return true;
}

/* The only control flow allowed inside a HW loop is another HW loop,
   ebreak, and ecall.  */
const char *
riscv_invalid_within_doloop (const rtx_insn *insn)
{
  if (CALL_P (insn))
    return "Function call in the loop.";
  /* Alas, the jump at the end of the loop is considered part of the loop,
     and there's no good way here to distinguish it from interspersed control
     flow.  We have to leave it to the doloop_end expander to analyze the loop
     again.  */
#if 0
  if (JUMP_P (insn) && recog_memoized (const_cast <rtx_insn *> (insn)) != CODE_FOR_doloop_end_i)
    return "Jump in loop.";
#endif

  return NULL;
}

/* Determine if we can implement the loop setup MD_INSN with cv.setupi,
   considering the hardware loop starts at the labels in the LABEL_REFs
   START_REF and END_REF.  */

bool
hwloop_setupi_p (rtx md_insn, rtx start_ref, rtx end_ref)
{
  rtx_insn *insn = as_a <rtx_insn *> (md_insn);
  rtx_insn *start = label_ref_label (start_ref);
  rtx_insn *end = label_ref_label (end_ref);

  /* The the loop must directly follow the cv.setupi instruction.  */
  if (next_active_insn (insn) != next_active_insn (start))
    return false;

  /* Loops with >= 2K instructions can't be setup with cv.setupi .  */
  for (unsigned count = 0; ; insn = NEXT_INSN (insn))
    {
      if (!active_insn_p (insn))
	continue;
      if (recog_memoized (insn) == CODE_FOR_doloop_end_i)
	{
	  rtx label_use = XVECEXP (PATTERN (insn), 0, 4);
	  if (label_ref_label (XEXP (label_use, 0)) == end)
	    break;
	}
      if (++count > 2047)
	return false;
    }
  return true;
}

void
add_label_op_ref (rtx_insn *insn, rtx label)
{
  if (GET_CODE (label) == LABEL_REF)
    label = label_ref_label (label);
  add_reg_note (insn, REG_LABEL_OPERAND, label);
  ++LABEL_NUSES (label);
}
