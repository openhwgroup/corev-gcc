/* { dg-do compile } */
/* { dg-require-effective-target corev_bitmanip } */
/* { dg-options "-march=rv32i_xcorevbitmanip1p0 -mabi=ilp32" } */

#include <stdint.h>
#include <stdio.h>

extern uint8_t res1;

uint8_t
foo (uint32_t a)
{
  res1 = __builtin_riscv_cv_bitmanip_fl1 (a);

  return res1;
}

/* { dg-final { scan-assembler-times "cv\.fl1\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
