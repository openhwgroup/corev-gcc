/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip -mabi=ilp32" } */

#include <stdint.h>
#include <riscv_corev_bitmanip.h>

uint32_t
test_extract (uint32_t a)
{
  return __riscv_cv_bitmanip_extract (a, 0);
}

uint32_t
test_extractr (uint32_t a, uint16_t b)
{
  return __riscv_cv_bitmanip_extract (a, b);
}

uint32_t 
test_extractu (uint32_t a)
{
  return __riscv_cv_bitmanip_extractu (a, 0);
}

uint32_t 
test_extractur (uint32_t a, uint16_t b)
{
  return __riscv_cv_bitmanip_extractu (a, b);
}

uint32_t 
test_insert (uint32_t a, uint32_t c)
{
  return __riscv_cv_bitmanip_insert (a, 0, c);
}

uint32_t 
test_insertr (uint32_t a, uint16_t b, uint32_t c)
{
  return __riscv_cv_bitmanip_insert (a, b, c);
}

uint32_t 
test_bclr (uint32_t a)
{
  return __riscv_cv_bitmanip_bclr (a, 0);
}

uint32_t 
test_bclrr (uint32_t a, uint16_t b)
{
  return __riscv_cv_bitmanip_bclr (a, b);
}

uint32_t 
test_bset (uint32_t a)
{
  return __riscv_cv_bitmanip_bset (a, 0);
}

uint32_t 
test_bsetr (uint32_t a, uint16_t b)
{
  return __riscv_cv_bitmanip_bclr (a, b);
}

uint32_t 
test_ff1 (uint32_t a)
{
  return __riscv_cv_bitmanip_ff1 (a);
}

uint32_t 
test_fl1 (uint32_t a)
{
  return __riscv_cv_bitmanip_fl1 (a);
}

uint32_t 
test_clb (uint32_t a)
{
  return __riscv_cv_bitmanip_clb (a);
}

uint32_t 
test_cnt (uint32_t a)
{
  return __riscv_cv_bitmanip_cnt (a);
}

uint32_t 
test_ror (uint32_t a, uint32_t b)
{
  return __riscv_cv_bitmanip_ror (a, b);
}

uint32_t
test_bitrev (uint32_t a)
{
  return __riscv_cv_bitmanip_bitrev (a, 1, 2);
}
