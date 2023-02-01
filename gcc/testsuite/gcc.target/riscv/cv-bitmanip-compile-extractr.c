/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip -mabi=ilp32" } */

#include <stdint.h>
#include <stdio.h>

extern int32_t res1;

int32_t
foo (int32_t a, uint16_t b)
{
  res1 = __builtin_riscv_cv_bitmanip_extract (a, b);

  return res1;
}

/* { dg-final { scan-assembler-times "cv\.extractr\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
