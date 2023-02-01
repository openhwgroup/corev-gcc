/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip -mabi=ilp32" } */

#include <stdint.h>
#include <stdio.h>

extern uint32_t res1;
extern uint32_t res2;
extern uint32_t res3;

uint32_t
foo (uint32_t a, uint32_t b)
{
  res1 = __builtin_riscv_cv_bitmanip_insert (a, 200, b);
  res2 = __builtin_riscv_cv_bitmanip_insert (a, 0, b);
  res3 = __builtin_riscv_cv_bitmanip_insert (a, 31, b);

  return res1 + res2 + res3;
}

/* { dg-final { scan-assembler-times "cv\.insert\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),6,8" 1 } } */
/* { dg-final { scan-assembler-times "cv\.insert\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),0,0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.insert\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),0,31" 1 } } */
