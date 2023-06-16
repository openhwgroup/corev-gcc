/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

int foo1(int a, int b)
{
  return __builtin_riscv_cv_alu_minu (a, b);
}

/* { dg-final { scan-assembler-times "cv\\.minu" 1 } } */
