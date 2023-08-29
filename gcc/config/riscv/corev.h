;; Header file for RISC-V CORE-V builtins.
;; Copyright (C) 2023 Free Software Foundation, Inc.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

#ifndef __RISCV_COREV_H
#define __RISCV_COREV_H

#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(TARGET_XCVALU)
int __builtin_abs (int j);
int __builtin_riscv_cv_alu_slet (int32_t  i, int32_t  j);
int __builtin_riscv_cv_alu_sletu (uint32_t i, uint32_t j);
int32_t __builtin_riscv_cv_alu_min (int32_t i, int32_t j);
uint32_t __builtin_riscv_cv_alu_minu (uint32_t i, uint32_t j);
int32_t __builtin_riscv_cv_alu_max (int32_t i, int32_t j);
uint32_t __builtin_riscv_cv_alu_maxu (uint32_t i, uint32_t j);
int32_t __builtin_riscv_cv_alu_exths (int16_t i);
uint32_t __builtin_riscv_cv_alu_exthz (uint16_t i);
int32_t __builtin_riscv_cv_alu_extbs (int8_t i);
uint32_t __builtin_riscv_cv_alu_extbz (uint8_t);
int32_t __builtin_riscv_cv_alu_clip (int32_t i, uint32_t j);
uint32_t __builtin_riscv_cv_alu_clipu (uint32_t i, uint32_t j);
int32_t __builtin_riscv_cv_alu_addN (int32_t x, int32_t y, uint8_t shft);
uint32_t __builtin_riscv_cv_alu_adduN (uint32_t x, uint32_t y, uint8_t shft);
int32_t __builtin_riscv_cv_alu_addRN (int32_t x, int32_t y, uint8_t shft);
uint32_t __builtin_riscv_cv_alu_adduRN (uint32_t x, uint32_t y, uint8_t shft);
int32_t __builtin_riscv_cv_alu_subN (int32_t x, int32_t y, uint8_t shft);
uint32_t __builtin_riscv_cv_alu_subuN (uint32_t x, uint32_t y, uint8_t shft);
int32_t __builtin_riscv_cv_alu_subRN (int32_t x, int32_t y, uint8_t shft);
uint32_t __builtin_riscv_cv_alu_subuRN (uint32_t x, uint32_t y, uint8_t shft);
#endif // defined(TARGET_XCVALU)

#if defined(TARGET_XCVMAC)
int32_t __builtin_riscv_cv_mac_mac (int32_t x, int32_t y, int32_t z);
int32_t __builtin_riscv_cv_mac_msu (int32_t x, int32_t y, int32_t z);
uint32_t __builtin_riscv_cv_mac_muluN (uint32_t x, uint32_t y, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_mulhhuN (uint32_t x, uint32_t y, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_mulsN (uint32_t x, uint32_t y, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_mulhhsN (uint32_t x, uint32_t y, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_muluRN (uint32_t x, uint32_t y, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_mulhhuRN (uint32_t x, uint32_t y, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_mulsRN (uint32_t x, uint32_t y, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_mulhhsRN (uint32_t x, uint32_t y, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_macuN (uint32_t x, uint32_t y, uint32_t z, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_machhuN (uint32_t x, uint32_t y, uint32_t z, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_macsN (uint32_t x, uint32_t y, int32_t z, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_machhsN (uint32_t x, uint32_t y, int32_t z, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_macuRN (uint32_t x, uint32_t y, uint32_t z, const uint8_t shft);
uint32_t __builtin_riscv_cv_mac_machhuRN (uint32_t x, uint32_t y, uint32_t z, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_macsRN (uint32_t x, uint32_t y, int32_t z, const uint8_t shft);
int32_t __builtin_riscv_cv_mac_machhsRN (uint32_t x, uint32_t y, int32_t z, const uint8_t shft);
#endif // defined(TARGET_XCVMAC)

#if defined(__cplusplus)
}
#endif

#endif // define __RISCV_COREV_H
