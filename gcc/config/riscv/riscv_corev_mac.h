/* riscv_corev_mac.h - CORE-V MAC intrinsics
   Copyright (C) 2022-2024 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef __RISCV_COREV_MAC_H
#define __RISCV_COREV_MAC_H

#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__riscv_xcvmac)

#define __riscv_cv_mac_mac(a,b,c) __builtin_riscv_cv_mac_mac(a,b,c)
#define __riscv_cv_mac_msu(a,b,c) __builtin_riscv_cv_mac_msu(a,b,c)

#define __riscv_cv_mac_muluN(rs1, rs2, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_muluN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_mulhhuN(rs1, rs2, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_mulhhuN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_mulsN(rs1, rs2, SHIFT) \
  (long) __builtin_riscv_cv_mac_mulsN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_mulhhsN(rs1, rs2, SHIFT) \
  (long) __builtin_riscv_cv_mac_mulhhsN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_muluRN(rs1, rs2, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_muluRN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_mulhhuRN(rs1, rs2, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_mulhhuRN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_mulsRN(rs1, rs2, SHIFT) \
  (long) __builtin_riscv_cv_mac_mulsRN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_mulhhsRN(rs1, rs2, SHIFT) \
  (long) __builtin_riscv_cv_mac_mulhhsRN((unsigned long) (rs1), \
                                 (unsigned long) (rs2), (const uint8_t) (SHIFT))

#define __riscv_cv_mac_macuN(rs1, rs2, rD, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_macuN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_machhuN(rs1, rs2, rD, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_machhuN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_macsN(rs1, rs2, rD, SHIFT) \
  (long) __builtin_riscv_cv_mac_macsN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_machhsN(rs1, rs2, rD, SHIFT) \
  (long) __builtin_riscv_cv_mac_machhsN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_macuRN(rs1, rs2, rD, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_macuRN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_machhuRN(rs1, rs2, rD, SHIFT) \
  (unsigned long) __builtin_riscv_cv_mac_machhuRN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_macsRN(rs1, rs2, rD, SHIFT) \
  (long) __builtin_riscv_cv_mac_macsRN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#define __riscv_cv_mac_machhsRN(rs1, rs2, rD, SHIFT) \
  (long) __builtin_riscv_cv_mac_machhsRN((unsigned long) (rs1), \
                                  (unsigned long) (rs2), (unsigned long) (rD), \
                                  (const uint8_t) (SHIFT))

#endif // defined(__riscv_xcvmac)

#if defined(__cplusplus)
}
#endif

#endif // define __RISCV_COREV_MAC_H
