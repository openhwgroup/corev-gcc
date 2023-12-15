/* riscv_corev_alu.h - CORE-V ALU intrinsics
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

#ifndef __RISCV_COREV_ALU_H
#define __RISCV_COREV_ALU_H

#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__riscv_xcvalu)

#define __DEFAULT_FN_ATTRS __attribute__((__always_inline__, __nodebug__))

#define __riscv_cv_abs(a) __builtin_abs(a)
#define __riscv_cv_alu_slet(a,b) __builtin_riscv_cv_alu_slet(a,b)
#define __riscv_cv_alu_sletu(a,b) __builtin_riscv_cv_alu_sletu(a,b)
#define __riscv_cv_alu_min(a,b) __builtin_riscv_cv_alu_min(a,b)
#define __riscv_cv_alu_minu(a,b) __builtin_riscv_cv_alu_minu(a,b)
#define __riscv_cv_alu_max(a,b) __builtin_riscv_cv_alu_max(a,b)
#define __riscv_cv_alu_maxu(a,b) __builtin_riscv_cv_alu_maxu(a,b)
#define __riscv_cv_alu_exths(a) __builtin_riscv_cv_alu_exths(a)
#define __riscv_cv_alu_exthz(a) __builtin_riscv_cv_alu_exthz(a)
#define __riscv_cv_alu_extbs(a) __builtin_riscv_cv_alu_extbs(a)
#define __riscv_cv_alu_extbz(a) __builtin_riscv_cv_alu_extbz(a)
#define __riscv_cv_alu_clip(a,b) __builtin_riscv_cv_alu_clip(a,b)
#define __riscv_cv_alu_clipu(a,b) __builtin_riscv_cv_alu_clipu(a,b)
#define __riscv_cv_alu_addN(a,b,shft) __builtin_riscv_cv_alu_addN(a,b,shft)
#define __riscv_cv_alu_adduN(a,b,shft) __builtin_riscv_cv_alu_adduN(a,b,shft)
#define __riscv_cv_alu_addRN(a,b,shft) __builtin_riscv_cv_alu_addRN(a,b,shft)
#define __riscv_cv_alu_adduRN(a,b,shft) __builtin_riscv_cv_alu_adduRN(a,b,shft)
#define __riscv_cv_alu_subN(a,b,shft) __builtin_riscv_cv_alu_subN(a,b,shft)
#define __riscv_cv_alu_subuN(a,b,shft) __builtin_riscv_cv_alu_subuN(a,b,shft)
#define __riscv_cv_alu_subRN(a,b,shft) __builtin_riscv_cv_alu_subRN(a,b,shft)
#define __riscv_cv_alu_subuRN(a,b,shft) __builtin_riscv_cv_alu_subuRN(a,b,shft)

#endif // defined(__riscv_xcvalu)

#if defined(__cplusplus)
}
#endif

#endif // define __RISCV_COREV_ALU_H
