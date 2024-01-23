/* { dg-do compile } */
/* { dg-require-effective-target cv_elw } */
/* { dg-options "-march=rv32i_xcvelw -mabi=ilp32" } */

#include <stdint.h>
#include <riscv_corev_elw.h>

uint32_t
test_elw (void *a)
{
  return __riscv_cv_elw_elw (a);
}
