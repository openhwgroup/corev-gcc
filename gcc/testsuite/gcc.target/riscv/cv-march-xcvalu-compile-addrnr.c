/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

int foo1(int a, int b, int c)
{
  return __builtin_riscv_cv_alu_addRN (a, b, c);
}

/* { dg-final { scan-assembler-times "cv\\.addRNr" 1 } } */
