/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu1p0 -mabi=ilp32" } */

int foo1(int a, int b, int c)
{
  return __builtin_riscv_cv_alu_subRN (a, b, c);
}

/* { dg-final { scan-assembler-times "cv\\.subRNr" 1 } } */
