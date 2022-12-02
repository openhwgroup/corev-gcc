/* Test for COREV branching immediate beq BI extensions */
/* { dg-do compile { target { riscv32-corev-elf } } } */
/* { dg-options "-march=rv32i_xcorevbi1p0 -std=gnu11" } */

/* This test checks if the compiler recognize the cv.beqimm pattern.
 * It is a boundary test for 5-bit signed immediate
 */

#define LOWER_BOUND (-16)
#define UPPER_BOUND (+15)

/* The compiler tends to switch from NE to EQ for a reason of cost */
void beqimm_upperbound(int *arg0, int *arg1)
{
  if (*arg0 != UPPER_BOUND)
  {
    *arg0 += 10;
  }
  else
  {
    *arg1 += 15;
    goto JUMP;
  }
  *arg0 += *arg1;

JUMP:
  *arg0 += 12;

  return;
}

void beqimm_lowerbound(int *arg0, int *arg1)
{
  if (*arg0 != LOWER_BOUND)
  {
    *arg0 += 10;
  }
  else
  {
    *arg1 += 15;
    goto JUMP;
  }
  *arg0 += *arg1;

JUMP:
  *arg0 += 12;

  return;
}

/* { dg-final { scan-assembler-times "cv\.beqimm\t.\\d+,15," 1 } } */
/* { dg-final { scan-assembler-times "cv\.beqimm\t.\\d+,-16," 1 } } */
