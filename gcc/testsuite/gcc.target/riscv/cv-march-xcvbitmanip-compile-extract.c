/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip1p0 -mabi=ilp32" } */

#include <stdint.h>
#include <stdio.h>

extern int32_t res1;
extern int32_t res2;
extern int32_t res3;
extern int32_t res4;

int32_t
foo (int32_t a)
{
  res1 = __builtin_riscv_cv_bitmanip_extract (a, 200);
  res2 = __builtin_riscv_cv_bitmanip_extract (a, 0);
  res3 = __builtin_riscv_cv_bitmanip_extract (a, 31);
  res4 = __builtin_riscv_cv_bitmanip_extract (a, 1023);

  return res1 + res2 + res3 + res4;
}

/* { dg-final { scan-assembler-times "cv\.extract\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),8,6" 1 } } */
/* { dg-final { scan-assembler-times "cv\.extract\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),0,0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.extract\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),31,0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.extract\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),31,31" 1 } } */
