/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip -mabi=ilp32" } */

#include <stdint.h>
#include <stdio.h>

extern uint32_t res1;
extern uint32_t res2;
extern uint32_t res3;
extern uint32_t res4;
extern uint32_t res5;

uint32_t
foo (uint32_t a)
{
  res1 = __builtin_riscv_cv_bitmanip_bitrev (a, 20, 2);
  res2 = __builtin_riscv_cv_bitmanip_bitrev (a, 0, 0);
  res3 = __builtin_riscv_cv_bitmanip_bitrev (a, 31, 0);
  res4 = __builtin_riscv_cv_bitmanip_bitrev (a, 0, 3);
  res5 = __builtin_riscv_cv_bitmanip_bitrev (a, 31, 3);

  return res1 + res2 + res3 + res4 + res5;
}

/* { dg-final { scan-assembler-times "cv\.bitrev\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),2,20" 1 } } */
/* { dg-final { scan-assembler-times "cv\.bitrev\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),0,0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.bitrev\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),0,31" 1 } } */
/* { dg-final { scan-assembler-times "cv\.bitrev\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),3,0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.bitrev\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),3,31" 1 } } */
