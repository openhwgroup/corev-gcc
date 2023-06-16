/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

int foo1(int a, int b)
{
  return __builtin_riscv_cv_alu_clipu (a, 15);
}

/* { dg-final { scan-assembler-times "cv\.clipu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),5" 1 } } */
