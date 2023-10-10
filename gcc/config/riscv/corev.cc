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
   structure.
   Likewise, if there is a large loop that has hardly any iterations,
   the loop setup can't be amortized, but we can't test here if the
   loop is large.  */
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

/* Starting at INSN, try to find, within the next COUNT insn,
   a doloop_end_i pattern that provides the label END .
   If found, return the remaining value of COUNT, otherwise, 0.  */
static unsigned
doloop_end_range_check (rtx_insn *insn, rtx_insn *end, unsigned count)
{
  for (; count > 0; insn = NEXT_INSN (insn))
    {
      if (insn == NULL_RTX)
	return 0;
      if (!active_insn_p (insn))
	continue;
      if (recog_memoized (insn) == CODE_FOR_doloop_end_i)
	{
	  rtx label_use = XVECEXP (PATTERN (insn), 0, 4);
	  if (label_ref_label (XEXP (label_use, 0)) == end)
	    break;
	}
      count--;
    }
  return count;
}

/* Determine if we can implement the loop setup MD_INSN with cv.setupi,
   considering the hardware loop starts at the labels in the LABEL_REFs
   START_REF and END_REF.  */

bool
hwloop_setupi_p (rtx md_insn, rtx start_ref, rtx end_ref)
{
  rtx_insn *insn = as_a <rtx_insn *> (md_insn);
  if (GET_CODE (start_ref) == UNSPEC)
    start_ref = XVECEXP (start_ref, 0, 0);
  if (GET_CODE (end_ref) == UNSPEC)
    end_ref = XVECEXP (end_ref, 0, 0);
  rtx_insn *start = label_ref_label (start_ref);
  rtx_insn *end = label_ref_label (end_ref);

  /* The the loop must directly follow the cv.setupi instruction.  */
  if (next_active_insn (insn) != next_active_insn (start))
    return false;

  /* Loops with >= 4K instructions can't be setup with cv.setupi .  */
  if (doloop_end_range_check (insn, end, 4095) == 0)
    return false;

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


/* Before register allocation, we need to know if a cv.setupi instruction
   might need to replaced with instructions that use an extra scratch
   register becasue the labels are out of range.  If we split into
   cv.starti / cv.endi / cv.counti, all three parameters can use a
   12 bit immediate.  Considering the instructions inside the loop,
   we got a three-address machine, so a typical instruction has three
   operands, each of which might need reloading.  To load or store a
   register from a stack slot on a 32 bit RISC-V, worst case we might
   need a LUI and a load or store instruction.  Thus seven instruction
   after reload for one instruction before reload.  The 12 bit unsigned
   offset allows 4095 instructions, so for a safe number before reload,
   we divide by seven to arrive at 585.  That seems a comfortable number
   that we don't have to worry too much about pessimizing the code when
   reserve a scratch register when the loop gets that big.

   For performance, we like to use sv.setupi or at least cv.setup where
   possible, as it is only a single instruction; we assume that usually,
   there will be no reloads for a HW loop if currently fit into the 5 bit
   immeidate range, as that makes them a small inner loop.

   loop start not immediatly following -> need to split
   otherwise, if loop end won't fit in u5, probably in u12 -> aim for cv.setup
   otherwise, if loop count won't fit in u12 -> aim for cv.setup
   loop end might not fit into u12 after reload -> need scratch register
    in case end needs to be loaded with cv.end .  */

namespace {

const pass_data pass_data_riscv_doloop_ranges =
{
  RTL_PASS, /* type */
  "riscv_doloop_ranges", /* name */
  OPTGROUP_LOOP, /* optinfo_flags */
  TV_LOOP_DOLOOP, /* tv_id */
  0, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  0, /* todo_flags_finish */
};

class pass_riscv_doloop_ranges : public rtl_opt_pass
{
public:
  pass_riscv_doloop_ranges (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_riscv_doloop_ranges, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    {
      return TARGET_XCVHWLP
	&& flag_branch_on_count_reg && optimize > 0;
    }
  virtual unsigned int execute (function *);

  opt_pass *clone ()
  {
    return new pass_riscv_doloop_ranges (m_ctxt);
  }
}; // class pass_riscv_doloop_ranges

/* Look for doloop_begin_i patterns and make sure start labels are
   appropriatly encapsulated or non-encapsulated in UNSPECs to show
   if they satisfy offset range requirements.
   We run this once just before register allocation and once afterwards,
   so we can't just formulate this as a branch shortening problem.
   In the post-reload pass, also add doloop_align if necessary.  */
unsigned int
pass_riscv_doloop_ranges::execute (function *)
{
  for (rtx_insn *insn = get_insns (); insn; insn = NEXT_INSN (insn))
    {
      if (!NONJUMP_INSN_P (insn)
	  || recog_memoized (insn) != CODE_FOR_doloop_begin_i)
	continue;
      rtx *lref_s_loc = &SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      rtx *lref_e_loc = &SET_SRC (XVECEXP (PATTERN (insn), 0, 1));
      rtx start_label_ref = *lref_s_loc;
      rtx end_label_ref = *lref_e_loc;
      rtx_insn *before = insn;
      if (GET_CODE (start_label_ref) == UNSPEC)
	start_label_ref = XVECEXP (start_label_ref, 0, 0);
      if (GET_CODE (end_label_ref) == UNSPEC)
	end_label_ref = XVECEXP (end_label_ref, 0, 0);

      if (next_active_insn (label_ref_label (start_label_ref))
	  != next_active_insn (insn))
	{
	  *lref_s_loc = start_label_ref;
	  before = label_ref_label (start_label_ref);
	}
      else if (GET_CODE (*lref_s_loc) != UNSPEC)
	*lref_s_loc = gen_rtx_UNSPEC (SImode, gen_rtvec (1, start_label_ref),
				      UNSPEC_CV_FOLLOWS);
      if (reload_completed && TARGET_RVC)
	emit_insn_before (gen_doloop_align (), before);

      rtx_insn *end_label = label_ref_label (end_label_ref);
      unsigned count = (reload_completed ? 4095 : 585);
      unsigned rest = doloop_end_range_check (insn, end_label, count);

      if (rest)
	{
	  /* Check if an unsigned 5 bit offset is enough.  */
	  bool short_p = count - rest <= 31;
	  HOST_WIDE_INT val
	    = short_p ? UNSPEC_CV_LP_END_5 : UNSPEC_CV_LP_END_12;
	  if (GET_CODE (*lref_e_loc) != UNSPEC
	      || XINT (*lref_e_loc, 1) != val)
	    *lref_e_loc
	      = gen_rtx_UNSPEC (SImode, gen_rtvec (1, end_label_ref), val);
	}
      else
	*lref_e_loc = end_label_ref;
    }

  return 0;
}

} // anon namespace

rtl_opt_pass *
make_pass_riscv_doloop_ranges (gcc::context *ctxt)
{
  return new pass_riscv_doloop_ranges (ctxt);
}
