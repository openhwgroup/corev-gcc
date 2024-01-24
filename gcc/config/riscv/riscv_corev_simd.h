/* riscv_corev_simd.h - CORE-V SIMD intrinsics
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

#ifndef __RISCV_COREV_SIMD_H
#define __RISCV_COREV_SIMD_H

#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__riscv_xcvsimd)

#define __riscv_cv_simd_add_h(rs1, rs2, DIV) \
  (unsigned long) __builtin_riscv_cv_simd_add_h((unsigned long) (rs1), \
				   (unsigned long) (rs2), (const uint8_t) (DIV))

#define __riscv_cv_simd_add_b(a,b) __builtin_riscv_cv_simd_add_b(a, b)
#define __riscv_cv_simd_add_sc_h(a,b) __builtin_riscv_cv_simd_add_sc_h(a, b)
#define __riscv_cv_simd_add_sc_b(a,b) __builtin_riscv_cv_simd_add_sc_b(a, b)

#define __riscv_cv_simd_sub_h(rs1, rs2, DIV) \
  (unsigned long) __builtin_riscv_cv_simd_sub_h((unsigned long) (rs1), \
				   (unsigned long) (rs2), (const uint8_t) (DIV))

#define __riscv_cv_simd_sub_b(a,b) __builtin_riscv_cv_simd_sub_b(a, b)
#define __riscv_cv_simd_sub_sc_h(a,b) __builtin_riscv_cv_simd_sub_sc_h(a, b)
#define __riscv_cv_simd_sub_sc_b(a,b) __builtin_riscv_cv_simd_sub_sc_b(a, b)
#define __riscv_cv_simd_avg_h(a, b) __builtin_riscv_cv_simd_avg_h(a, b)
#define __riscv_cv_simd_avg_b(a, b) __builtin_riscv_cv_simd_avg_b(a, b)
#define __riscv_cv_simd_avg_sc_h(a, b) __builtin_riscv_cv_simd_avg_sc_h(a, b)
#define __riscv_cv_simd_avg_sc_b(a, b) __builtin_riscv_cv_simd_avg_sc_b(a, b)
#define __riscv_cv_simd_avgu_h(a, b) __builtin_riscv_cv_simd_avgu_h(a, b)
#define __riscv_cv_simd_avgu_b(a, b) __builtin_riscv_cv_simd_avgu_b(a, b)
#define __riscv_cv_simd_avgu_sc_h(a, b) __builtin_riscv_cv_simd_avgu_sc_h(a, b)
#define __riscv_cv_simd_avgu_sc_b(a, b) __builtin_riscv_cv_simd_avgu_sc_b(a, b)
#define __riscv_cv_simd_min_h(a, b) __builtin_riscv_cv_simd_min_h(a, b)
#define __riscv_cv_simd_min_b(a, b) __builtin_riscv_cv_simd_min_b(a, b)
#define __riscv_cv_simd_min_sc_h(a, b) __builtin_riscv_cv_simd_min_sc_h(a, b)
#define __riscv_cv_simd_min_sc_b(a, b) __builtin_riscv_cv_simd_min_sc_b(a, b)
#define __riscv_cv_simd_minu_h(a, b) __builtin_riscv_cv_simd_minu_h(a, b)
#define __riscv_cv_simd_minu_b(a, b) __builtin_riscv_cv_simd_minu_b(a, b)
#define __riscv_cv_simd_minu_sc_h(a, b) __builtin_riscv_cv_simd_minu_sc_h(a, b)
#define __riscv_cv_simd_minu_sc_b(a, b) __builtin_riscv_cv_simd_minu_sc_b(a, b)
#define __riscv_cv_simd_max_h(a, b) __builtin_riscv_cv_simd_max_h(a, b)
#define __riscv_cv_simd_max_b(a, b) __builtin_riscv_cv_simd_max_b(a, b)
#define __riscv_cv_simd_max_sc_h(a, b) __builtin_riscv_cv_simd_max_sc_h(a, b)
#define __riscv_cv_simd_max_sc_b(a, b) __builtin_riscv_cv_simd_max_sc_b(a, b)
#define __riscv_cv_simd_maxu_h(a, b) __builtin_riscv_cv_simd_maxu_h(a, b)
#define __riscv_cv_simd_maxu_b(a, b) __builtin_riscv_cv_simd_maxu_b(a, b)
#define __riscv_cv_simd_maxu_sc_h(a, b) __builtin_riscv_cv_simd_maxu_sc_h(a, b)
#define __riscv_cv_simd_maxu_sc_b(a, b) __builtin_riscv_cv_simd_maxu_sc_b(a, b)
#define __riscv_cv_simd_srl_h(a, b) __builtin_riscv_cv_simd_srl_h(a, b)
#define __riscv_cv_simd_srl_b(a, b) __builtin_riscv_cv_simd_srl_b(a, b)
#define __riscv_cv_simd_srl_sc_h(a, b) __builtin_riscv_cv_simd_srl_sc_h(a, b)
#define __riscv_cv_simd_srl_sc_b(a, b) __builtin_riscv_cv_simd_srl_sc_b(a, b)
#define __riscv_cv_simd_sra_h(a, b) __builtin_riscv_cv_simd_sra_h(a, b)
#define __riscv_cv_simd_sra_b(a, b) __builtin_riscv_cv_simd_sra_b(a, b)
#define __riscv_cv_simd_sra_sc_h(a, b) __builtin_riscv_cv_simd_sra_sc_h(a, b)
#define __riscv_cv_simd_sra_sc_b(a, b) __builtin_riscv_cv_simd_sra_sc_b(a, b)
#define __riscv_cv_simd_sll_h(a, b) __builtin_riscv_cv_simd_sll_h(a, b)
#define __riscv_cv_simd_sll_b(a, b) __builtin_riscv_cv_simd_sll_b(a, b)
#define __riscv_cv_simd_sll_sc_h(a, b) __builtin_riscv_cv_simd_sll_sc_h(a, b)
#define __riscv_cv_simd_sll_sc_b(a, b) __builtin_riscv_cv_simd_sll_sc_b(a, b)
#define __riscv_cv_simd_or_h(a, b) __builtin_riscv_cv_simd_or_h(a, b)
#define __riscv_cv_simd_or_b(a, b) __builtin_riscv_cv_simd_or_b(a, b)
#define __riscv_cv_simd_or_sc_h(a, b) __builtin_riscv_cv_simd_or_sc_h(a, b)
#define __riscv_cv_simd_or_sc_b(a, b) __builtin_riscv_cv_simd_or_sc_b(a, b)
#define __riscv_cv_simd_xor_h(a, b) __builtin_riscv_cv_simd_xor_h(a, b)
#define __riscv_cv_simd_xor_b(a, b) __builtin_riscv_cv_simd_xor_b(a, b)
#define __riscv_cv_simd_xor_sc_h(a, b) __builtin_riscv_cv_simd_xor_sc_h(a, b)
#define __riscv_cv_simd_xor_sc_b(a, b) __builtin_riscv_cv_simd_xor_sc_b(a, b)
#define __riscv_cv_simd_and_h(a, b) __builtin_riscv_cv_simd_and_h(a, b)
#define __riscv_cv_simd_and_b(a, b) __builtin_riscv_cv_simd_and_b(a, b)
#define __riscv_cv_simd_and_sc_h(a, b) __builtin_riscv_cv_simd_and_sc_h(a, b)
#define __riscv_cv_simd_and_sc_b(a, b) __builtin_riscv_cv_simd_and_sc_b(a, b)
#define __riscv_cv_simd_abs_h(a) __builtin_riscv_cv_simd_abs_h(a)
#define __riscv_cv_simd_abs_b(a) __builtin_riscv_cv_simd_abs_b(a)
#define __riscv_cv_simd_neg_h(a) __builtin_riscv_cv_simd_neg_h(a)
#define __riscv_cv_simd_neg_b(a) __builtin_riscv_cv_simd_neg_b(a)

#define __riscv_cv_simd_extract_h(rs1, SEL) \
  (unsigned long) __builtin_riscv_cv_simd_extract_h((unsigned long) (rs1), \
						    (const uint8_t) (SEL))

#define __riscv_cv_simd_extract_b(rs1, SEL) \
  (unsigned long) __builtin_riscv_cv_simd_extract_b((unsigned long) (rs1), \
						    (const uint8_t) (SEL))

#define __riscv_cv_simd_extractu_h(rs1, SEL) \
  (unsigned long) __builtin_riscv_cv_simd_extractu_h((unsigned long) (rs1), \
						     (const uint8_t) (SEL))

#define __riscv_cv_simd_extractu_b(rs1, SEL) \
  (unsigned long) __builtin_riscv_cv_simd_extractu_b((unsigned long) (rs1), \
						     (const uint8_t) (SEL))

#define __riscv_cv_simd_insert_h(rs1, rs2, SEL) \
  (unsigned long) __builtin_riscv_cv_simd_insert_h((unsigned long) (rs1), \
				   (unsigned long) (rs2), (const uint8_t) (SEL))

#define __riscv_cv_simd_insert_b(rs1, rs2, SEL) \
  (unsigned long) __builtin_riscv_cv_simd_insert_b((unsigned long) (rs1), \
				   (unsigned long) (rs2), (const uint8_t) (SEL))

#define __riscv_cv_simd_dotup_h(a, b) __builtin_riscv_cv_simd_dotup_h(a, b)
#define __riscv_cv_simd_dotup_b(a, b) __builtin_riscv_cv_simd_dotup_b(a, b)
#define __riscv_cv_simd_dotup_sc_h(a, b) __builtin_riscv_cv_simd_dotup_sc_h(a, b)
#define __riscv_cv_simd_dotup_sc_b(a, b) __builtin_riscv_cv_simd_dotup_sc_b(a, b)
#define __riscv_cv_simd_dotusp_h(a, b) __builtin_riscv_cv_simd_dotusp_h(a, b)
#define __riscv_cv_simd_dotusp_b(a, b) __builtin_riscv_cv_simd_dotusp_b(a, b)
#define __riscv_cv_simd_dotusp_sc_h(a, b) __builtin_riscv_cv_simd_dotusp_sc_h(a, b)
#define __riscv_cv_simd_dotusp_sc_b(a, b) __builtin_riscv_cv_simd_dotusp_sc_b(a, b)
#define __riscv_cv_simd_dotsp_h(a, b) __builtin_riscv_cv_simd_dotsp_h(a, b)
#define __riscv_cv_simd_dotsp_b(a, b) __builtin_riscv_cv_simd_dotsp_b(a, b)
#define __riscv_cv_simd_dotsp_sc_h(a, b) __builtin_riscv_cv_simd_dotsp_sc_h(a, b)
#define __riscv_cv_simd_dotsp_sc_b(a, b) __builtin_riscv_cv_simd_dotsp_sc_b(a, b)
#define __riscv_cv_simd_sdotup_h(a, b, c) __builtin_riscv_cv_simd_sdotup_h(a, b, c)
#define __riscv_cv_simd_sdotup_b(a, b, c) __builtin_riscv_cv_simd_sdotup_b(a, b, c)
#define __riscv_cv_simd_sdotup_sc_h(a, b, c) __builtin_riscv_cv_simd_sdotup_sc_h(a, b, c)
#define __riscv_cv_simd_sdotup_sc_b(a, b, c) __builtin_riscv_cv_simd_sdotup_sc_b(a, b, c)
#define __riscv_cv_simd_sdotusp_h(a, b, c) __builtin_riscv_cv_simd_sdotusp_h(a, b, c)
#define __riscv_cv_simd_sdotusp_b(a, b, c) __builtin_riscv_cv_simd_sdotusp_b(a, b, c)
#define __riscv_cv_simd_sdotusp_sc_h(a, b, c) __builtin_riscv_cv_simd_sdotusp_sc_h(a, b, c)
#define __riscv_cv_simd_sdotusp_sc_b(a, b, c) __builtin_riscv_cv_simd_sdotusp_sc_b(a, b, c)
#define __riscv_cv_simd_sdotsp_h(a, b, c) __builtin_riscv_cv_simd_sdotsp_h(a, b, c)
#define __riscv_cv_simd_sdotsp_b(a, b, c) __builtin_riscv_cv_simd_sdotsp_b(a, b, c)
#define __riscv_cv_simd_sdotsp_sc_h(a, b, c) __builtin_riscv_cv_simd_sdotsp_sc_h(a, b, c)
#define __riscv_cv_simd_sdotsp_sc_b(a, b, c) __builtin_riscv_cv_simd_sdotsp_sc_b(a, b, c)

#define __riscv_cv_simd_shuffle_h(a, flgs) __builtin_riscv_cv_simd_shuffle_h(a, flgs)

#define __riscv_cv_simd_shuffle_sci_h(rs1, FLGS) \
  (unsigned long) __builtin_riscv_cv_simd_shuffle_sci_h((unsigned long) (rs1), \
					(const uint8_t) (FLGS))

#define __riscv_cv_simd_shuffle_b(a,b) __builtin_riscv_cv_simd_shuffle_b(a, b)

#define __riscv_cv_simd_shuffle_sci_b(rs1, FLGS) \
  (unsigned long) __builtin_riscv_cv_simd_shuffle_sci_b((unsigned long) (rs1), \
					(const uint8_t) (FLGS))

#define __riscv_cv_simd_shuffle2_h(a, flgs, c) __builtin_riscv_cv_simd_shuffle2_h(a, flgs, c)
#define __riscv_cv_simd_shuffle2_b(a, flgs, c) __builtin_riscv_cv_simd_shuffle2_b(a, flgs, c)
#define __riscv_cv_simd_packhi_h(a, b) __builtin_riscv_cv_simd_packhi_h(a, b)
#define __riscv_cv_simd_packlo_h(a, b) __builtin_riscv_cv_simd_packlo_h(a, b)
#define __riscv_cv_simd_packhi_b(a, b) __builtin_riscv_cv_simd_packhi_b(a, b)
#define __riscv_cv_simd_packlo_b(a, b) __builtin_riscv_cv_simd_packlo_b(a, b)
#define __riscv_cv_simd_cmpeq_h(a, b) __builtin_riscv_cv_simd_cmpeq_h(a, b)
#define __riscv_cv_simd_cmpeq_b(a, b) __builtin_riscv_cv_simd_cmpeq_b(a, b)
#define __riscv_cv_simd_cmpeq_sc_h(a, b) __builtin_riscv_cv_simd_cmpeq_sc_h(a, b)
#define __riscv_cv_simd_cmpeq_sc_b(a, b) __builtin_riscv_cv_simd_cmpeq_sc_b(a, b)
#define __riscv_cv_simd_cmpne_h(a, b) __builtin_riscv_cv_simd_cmpne_h(a, b)
#define __riscv_cv_simd_cmpne_b(a, b) __builtin_riscv_cv_simd_cmpne_b(a, b)
#define __riscv_cv_simd_cmpne_sc_h(a, b) __builtin_riscv_cv_simd_cmpne_sc_h(a, b)
#define __riscv_cv_simd_cmpne_sc_b(a, b) __builtin_riscv_cv_simd_cmpne_sc_b(a, b)
#define __riscv_cv_simd_cmpgt_h(a, b) __builtin_riscv_cv_simd_cmpgt_h(a, b)
#define __riscv_cv_simd_cmpgt_b(a, b) __builtin_riscv_cv_simd_cmpgt_b(a, b)
#define __riscv_cv_simd_cmpgt_sc_h(a, b) __builtin_riscv_cv_simd_cmpgt_sc_h(a, b)
#define __riscv_cv_simd_cmpgt_sc_b(a, b) __builtin_riscv_cv_simd_cmpgt_sc_b(a, b)
#define __riscv_cv_simd_cmpge_h(a, b) __builtin_riscv_cv_simd_cmpge_h(a, b)
#define __riscv_cv_simd_cmpge_b(a, b) __builtin_riscv_cv_simd_cmpge_b(a, b)
#define __riscv_cv_simd_cmpge_sc_h(a, b) __builtin_riscv_cv_simd_cmpge_sc_h(a, b)
#define __riscv_cv_simd_cmpge_sc_b(a, b) __builtin_riscv_cv_simd_cmpge_sc_b(a, b)
#define __riscv_cv_simd_cmplt_h(a, b) __builtin_riscv_cv_simd_cmplt_h(a, b)
#define __riscv_cv_simd_cmplt_b(a, b) __builtin_riscv_cv_simd_cmplt_b(a, b)
#define __riscv_cv_simd_cmplt_sc_h(a, b) __builtin_riscv_cv_simd_cmplt_sc_h(a, b)
#define __riscv_cv_simd_cmplt_sc_b(a, b) __builtin_riscv_cv_simd_cmplt_sc_b(a, b)
#define __riscv_cv_simd_cmple_h(a, b) __builtin_riscv_cv_simd_cmple_h(a, b)
#define __riscv_cv_simd_cmple_b(a, b) __builtin_riscv_cv_simd_cmple_b(a, b)
#define __riscv_cv_simd_cmple_sc_h(a, b) __builtin_riscv_cv_simd_cmple_sc_h(a, b)
#define __riscv_cv_simd_cmple_sc_b(a, b) __builtin_riscv_cv_simd_cmple_sc_b(a, b)
#define __riscv_cv_simd_cmpgtu_h(a, b) __builtin_riscv_cv_simd_cmpgtu_h(a, b)
#define __riscv_cv_simd_cmpgtu_b(a, b) __builtin_riscv_cv_simd_cmpgtu_b(a, b)
#define __riscv_cv_simd_cmpgtu_sc_h(a, b) __builtin_riscv_cv_simd_cmpgtu_sc_h(a, b)
#define __riscv_cv_simd_cmpgtu_sc_b(a, b) __builtin_riscv_cv_simd_cmpgtu_sc_b(a, b)
#define __riscv_cv_simd_cmpgeu_h(a, b) __builtin_riscv_cv_simd_cmpgeu_h(a, b)
#define __riscv_cv_simd_cmpgeu_b(a, b) __builtin_riscv_cv_simd_cmpgeu_b(a, b)
#define __riscv_cv_simd_cmpgeu_sc_h(a, b) __builtin_riscv_cv_simd_cmpgeu_sc_h(a, b)
#define __riscv_cv_simd_cmpgeu_sc_b(a, b) __builtin_riscv_cv_simd_cmpgeu_sc_b(a, b)
#define __riscv_cv_simd_cmpltu_h(a, b) __builtin_riscv_cv_simd_cmpltu_h(a, b)
#define __riscv_cv_simd_cmpltu_b(a, b) __builtin_riscv_cv_simd_cmpltu_b(a, b)
#define __riscv_cv_simd_cmpltu_sc_h(a, b) __builtin_riscv_cv_simd_cmpltu_sc_h(a, b)
#define __riscv_cv_simd_cmpltu_sc_b(a, b) __builtin_riscv_cv_simd_cmpltu_sc_b(a, b)
#define __riscv_cv_simd_cmpleu_h(a, b) __builtin_riscv_cv_simd_cmpleu_h(a, b)
#define __riscv_cv_simd_cmpleu_b(a, b) __builtin_riscv_cv_simd_cmpleu_b(a, b)
#define __riscv_cv_simd_cmpleu_sc_h(a, b) __builtin_riscv_cv_simd_cmpleu_sc_h(a, b)
#define __riscv_cv_simd_cmpleu_sc_b(a, b) __builtin_riscv_cv_simd_cmpleu_sc_b(a, b)

#define __riscv_cv_simd_cplxmul_r(rs1, rs2, rD, DIV) \
  (unsigned long) __builtin_riscv_cv_simd_cplxmul_r((unsigned long) (rs1), \
				  (unsigned long) (rs2), (unsigned long) (rD), \
				  (const uint8_t) (DIV))

#define __riscv_cv_simd_cplxmul_i(rs1, rs2, rD, DIV) \
  (unsigned long) __builtin_riscv_cv_simd_cplxmul_i((unsigned long) (rs1), \
				  (unsigned long) (rs2), (unsigned long) (rD), \
				  (const uint8_t) (DIV))

#define __riscv_cv_simd_cplxconj(a) __builtin_riscv_cv_simd_cplxconj(a)

#define __riscv_cv_simd_subrotmj(rs1, rs2, DIV) \
  (unsigned long) __builtin_riscv_cv_simd_subrotmj((unsigned long) (rs1), \
				   (unsigned long) (rs2), (const uint8_t) (DIV))

#endif // defined(__riscv_xcvsimd)

#if defined(__cplusplus)
}
#endif

#endif // define __RISCV_COREV_SIMD_H
