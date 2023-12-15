/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

#include <stdint.h>
#include <riscv_corev_alu.h>

int
test_alu_slet (int32_t a, int32_t b)
{
  return __riscv_cv_alu_slet(a, b);
}

int
test_alu_sletu (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_sletu(a, b);
}

int
test_alu_min (int32_t a, int32_t b) {
  return __riscv_cv_alu_min(a, b);
}

int
test_alu_minu (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_minu(a, b);
}

int
test_alu_max (int32_t a, int32_t b) {
  return __riscv_cv_alu_max(a, b);
}

int
test_alu_maxu (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_maxu(a, b);
}

int
test_alu_exths (int16_t a) {
  return __riscv_cv_alu_exths(a);
}

int
test_alu_exthz (uint16_t a) {
  return __riscv_cv_alu_exthz(a);
}

int
test_alu_extbs (int8_t a) {
  return __riscv_cv_alu_extbs(a);
}

int
test_alu_extbz (uint8_t a) {
  return __riscv_cv_alu_extbz(a);
}

int
test_alu_clip (int32_t a) {
  return __riscv_cv_alu_clip(a, 0);
}

int
test_alu_clipu (uint32_t a) {
  return __riscv_cv_alu_clipu(a, 0);
}

int
test_alu_addN (int32_t a, int32_t b) {
  return __riscv_cv_alu_addN(a, b, 0);
}

int
test_alu_adduN (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_adduN(a, b, 0);
}

int
test_alu_addRN (int32_t a, int32_t b) {
  return __riscv_cv_alu_addRN(a, b, 0);
}

int
test_alu_adduRN (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_adduRN(a, b, 0);
}

int
test_alu_subN (int32_t a, int32_t b) {
  return __riscv_cv_alu_subN(a, b, 0);
}

int
test_alu_subuN (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_subuN(a, b, 0);
}

int
test_alu_subRN (int32_t a, int32_t b) {
  return __riscv_cv_alu_subRN(a, b, 0);
}

int
test_alu_subuRN (uint32_t a, uint32_t b) {
  return __riscv_cv_alu_subuRN(a, b, 0);
}
