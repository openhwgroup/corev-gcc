/* riscv_corev_bitmanip.h - CORE-V BITMANIP intrinsics
   Copyright (C) 2022-2023 Free Software Foundation, Inc.

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

#ifndef __RISCV_COREV_BITMANIP_H
#define __RISCV_COREV_BITMANIP_H

#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__riscv_xcvbitmanip)

#define __riscv_cv_bitmanip_extract(a, range) __builtin_riscv_cv_bitmanip_extract(a, range)
#define __riscv_cv_bitmanip_extractu(a, range) __builtin_riscv_cv_bitmanip_extractu(a, range)
#define __riscv_cv_bitmanip_insert(a, range, k) __builtin_riscv_cv_bitmanip_insert(a, range, k)
#define __riscv_cv_bitmanip_bclr(a, range) __builtin_riscv_cv_bitmanip_bclr(a, range)
#define __riscv_cv_bitmanip_bset(a, range) __builtin_riscv_cv_bitmanip_bset(a, range)
#define __riscv_cv_bitmanip_ff1(a) __builtin_riscv_cv_bitmanip_ff1(a)
#define __riscv_cv_bitmanip_fl1(a) __builtin_riscv_cv_bitmanip_fl1(a)
#define __riscv_cv_bitmanip_clb(a) __builtin_riscv_cv_bitmanip_clb(a)
#define __riscv_cv_bitmanip_cnt(a) __builtin_riscv_cv_bitmanip_cnt(a)
#define __riscv_cv_bitmanip_ror(a, b) __builtin_riscv_cv_bitmanip_ror(a, b)

#define __riscv_cv_bitmanip_bitrev(rs1, PTS, RADIX) \
  (unsigned long) __builtin_riscv_cv_bitmanip_bitrev((unsigned long) (rs1), \
                                 (const uint8_t) (PTS), (const uint8_t) (RADIX))

#endif // defined(__riscv_xcvbitmanip)

#if defined(__cplusplus)
}
#endif

#endif // define __RISCV_COREV_BITMANIP_H
