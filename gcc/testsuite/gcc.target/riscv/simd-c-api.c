/* { dg-do compile } */
/* { dg-require-effective-target cv_simd } */
/* { dg-options "-march=rv32i_xcvsimd -mabi=ilp32" } */

#include <stdint.h>
#include <riscv_corev_simd.h>

uint32_t
test_add_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_add_h (a, b, 0);
}

uint32_t
test_add_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_add_b (a, b);
}

uint32_t
test_add_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_add_sc_h (a, b);
}

uint32_t
test_add_sci_h (uint32_t a)
{
  return __riscv_cv_simd_add_sc_h (a, 0);
}

uint32_t
test_add_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_add_sc_b (a, b);
}

uint32_t
test_add_sci_b (uint32_t a)
{
  return __riscv_cv_simd_add_sc_b (a, 0);
}

uint32_t
test_sub_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_sub_h (a, b, 0);
}

uint32_t
test_sub_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_sub_b (a, b);
}

uint32_t
test_sub_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_sub_sc_h (a, b);
}

uint32_t
test_sub_sci_h (uint32_t a)
{
  return __riscv_cv_simd_sub_sc_h (a, 0);
}

uint32_t
test_sub_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_sub_sc_b (a, b);
}

uint32_t
test_sub_sci_b (uint32_t a)
{
  return __riscv_cv_simd_sub_sc_b (a, 0);
}

uint32_t
test_avg_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_avg_h (a, b);
}

uint32_t
test_avg_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_avg_b (a, b);
}

uint32_t
test_avg_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_avg_sc_h (a, b);
}

uint32_t
test_avg_sci_h (uint32_t a)
{
  return __riscv_cv_simd_avg_sc_h (a, 0);
}

uint32_t
test_avg_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_avg_sc_b (a, b);
}

uint32_t
test_avg_sci_b (uint32_t a)
{
  return __riscv_cv_simd_avg_sc_b (a, 0);
}

uint32_t
test_avgu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_avgu_h (a, b);
}

uint32_t
test_avgu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_avgu_b (a, b);
}

uint32_t
test_avgu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_avgu_sc_h (a, b);
}

uint32_t
test_avgu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_avgu_sc_h (a, 0);
}

uint32_t
test_avgu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_avgu_sc_b (a, b);
}

uint32_t
test_avgu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_avgu_sc_b (a, 0);
}

uint32_t
test_min_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_min_h (a, b);
}

uint32_t
test_min_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_min_b (a, b);
}

uint32_t
test_min_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_min_sc_h (a, b);
}

uint32_t
test_min_sci_h (uint32_t a)
{
  return __riscv_cv_simd_min_sc_h (a, 0);
}

uint32_t
test_min_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_min_sc_b (a, b);
}

uint32_t
test_min_sci_b (uint32_t a)
{
  return __riscv_cv_simd_min_sc_b (a, 0);
}

uint32_t
test_minu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_minu_h (a, b);
}

uint32_t
test_minu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_minu_b (a, b);
}

uint32_t
test_minu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_minu_sc_h (a, b);
}

uint32_t
test_minu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_minu_sc_h (a, 0);
}

uint32_t
test_minu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_minu_sc_b (a, b);
}

uint32_t
test_minu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_minu_sc_b (a, 0);
}

uint32_t
test_max_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_max_h (a, b);
}

uint32_t
test_max_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_max_b (a, b);
}

uint32_t
test_max_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_max_sc_h (a, b);
}

uint32_t
test_max_sci_h (uint32_t a)
{
  return __riscv_cv_simd_max_sc_h (a, 0);
}

uint32_t
test_max_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_max_sc_b (a, b);
}

uint32_t
test_max_sci_b (uint32_t a)
{
  return __riscv_cv_simd_max_sc_b (a, 0);
}

uint32_t
test_maxu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_maxu_h (a, b);
}

uint32_t
test_maxu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_maxu_b (a, b);
}

uint32_t
test_maxu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_maxu_sc_h (a, b);
}

uint32_t
test_maxu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_maxu_sc_h (a, 0);
}

uint32_t
test_maxu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_maxu_sc_b (a, b);
}

uint32_t
test_maxu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_maxu_sc_b (a, 0);
}

uint32_t
test_srl_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_srl_h (a, b);
}

uint32_t
test_srl_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_srl_b (a, b);
}

uint32_t
test_srl_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_srl_sc_h (a, b);
}

uint32_t
test_srl_sci_h (uint32_t a)
{
  return __riscv_cv_simd_srl_sc_h (a, 0);
}

uint32_t
test_srl_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_srl_sc_b (a, b);
}

uint32_t
test_srl_sci_b (uint32_t a)
{
  return __riscv_cv_simd_srl_sc_b (a, 0);
}

uint32_t
test_sra_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_sra_h (a, b);
}

uint32_t
test_sra_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_sra_b (a, b);
}

uint32_t
test_sra_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_sra_sc_h (a, b);
}

uint32_t
test_sra_sci_h (uint32_t a)
{
  return __riscv_cv_simd_sra_sc_h (a, 0);
}

uint32_t
test_sra_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_sra_sc_b (a, b);
}

uint32_t
test_sra_sci_b (uint32_t a)
{
  return __riscv_cv_simd_sra_sc_b (a, 0);
}

uint32_t
test_sll_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_sll_h (a, b);
}

uint32_t
test_sll_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_sll_b (a, b);
}

uint32_t
test_sll_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_sll_sc_h (a, b);
}

uint32_t
test_sll_sci_h (uint32_t a)
{
  return __riscv_cv_simd_sll_sc_h (a, 0);
}

uint32_t
test_sll_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_sll_sc_b (a, b);
}

uint32_t
test_sll_sci_b (uint32_t a)
{
  return __riscv_cv_simd_sll_sc_b (a, 0);
}

uint32_t
test_or_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_or_h (a, b);
}

uint32_t
test_or_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_or_b (a, b);
}

uint32_t
test_or_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_or_sc_h (a, b);
}

uint32_t
test_or_sci_h (uint32_t a)
{
  return __riscv_cv_simd_or_sc_h (a, 0);
}

uint32_t
test_or_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_or_sc_b (a, b);
}

uint32_t
test_or_sci_b (uint32_t a)
{
  return __riscv_cv_simd_or_sc_b (a, 0);
}

uint32_t
test_xor_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_xor_h (a, b);
}

uint32_t
test_xor_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_xor_b (a, b);
}

uint32_t
test_xor_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_xor_sc_h (a, b);
}

uint32_t
test_xor_sci_h (uint32_t a)
{
  return __riscv_cv_simd_xor_sc_h (a, 0);
}

uint32_t
test_xor_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_xor_sc_b (a, b);
}

uint32_t
test_xor_sci_b (uint32_t a)
{
  return __riscv_cv_simd_xor_sc_b (a, 0);
}

uint32_t
test_and_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_and_h (a, b);
}

uint32_t
test_and_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_and_b (a, b);
}

uint32_t
test_and_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_and_sc_h (a, b);
}

uint32_t
test_and_sci_h (uint32_t a)
{
  return __riscv_cv_simd_and_sc_h (a, 0);
}

uint32_t
test_and_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_and_sc_b (a, b);
}

uint32_t
test_and_sci_b (uint32_t a)
{
  return __riscv_cv_simd_and_sc_b (a, 0);
}

uint32_t
test_abs_h (uint32_t a)
{
  return __riscv_cv_simd_abs_h (a);
}

uint32_t
test_abs_b (uint32_t a)
{
  return __riscv_cv_simd_abs_b (a);
}

uint32_t
test_neg_h (uint32_t a)
{
  return __riscv_cv_simd_neg_h (a);
}

uint32_t
test_neg_b (uint32_t a)
{
  return __riscv_cv_simd_neg_b (a);
}

uint32_t
test_dotup_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_dotup_h (a, b);
}

uint32_t
test_dotup_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_dotup_b (a, b);
}

uint32_t
test_dotup_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_dotup_sc_h (a, b);
}

uint32_t
test_dotup_sci_h (uint32_t a)
{
  return __riscv_cv_simd_dotup_sc_h (a, 0);
}

uint32_t
test_dotup_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_dotup_sc_b (a, b);
}

uint32_t
test_dotup_sci_b (uint32_t a)
{
  return __riscv_cv_simd_dotup_sc_b (a, 0);
}

uint32_t
test_dotusp_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_dotusp_h (a, b);
}

uint32_t
test_dotusp_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_dotusp_b (a, b);
}

uint32_t
test_dotusp_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_dotusp_sc_h (a, b);
}

uint32_t
test_dotusp_sci_h (uint32_t a)
{
  return __riscv_cv_simd_dotusp_sc_h (a, 0);
}

uint32_t
test_dotusp_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_dotusp_sc_b (a, b);
}

uint32_t
test_dotusp_sci_b (uint32_t a)
{
  return __riscv_cv_simd_dotusp_sc_b (a, 0);
}

uint32_t
test_dotsp_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_dotsp_h (a, b);
}

uint32_t
test_dotsp_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_dotsp_b (a, b);
}

uint32_t
test_dotsp_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_dotsp_sc_h (a, b);
}

uint32_t
test_dotsp_sci_h (uint32_t a)
{
  return __riscv_cv_simd_dotsp_sc_h (a, 0);
}

uint32_t
test_dotsp_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_dotsp_sc_b (a, b);
}

uint32_t
test_dotsp_sci_b (uint32_t a)
{
  return __riscv_cv_simd_dotsp_sc_b (a, 0);
}

uint32_t
test_sdotup_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotup_h (a, b, c);
}

uint32_t
test_sdotup_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotup_b (a, b, c);
}

uint32_t
test_sdotup_sc_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotup_sc_h (a, b, c);
}

uint32_t
test_sdotup_sci_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_sdotup_sc_h (a, 0, b);
}

uint32_t
test_sdotup_sc_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotup_sc_b (a, b, c);
}

uint32_t
test_sdotup_sci_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_sdotup_sc_b (a, 0, b);
}

uint32_t
test_sdotusp_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotusp_h (a, b, c);
}

uint32_t
test_sdotusp_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotusp_b (a, b, c);
}

uint32_t
test_sdotusp_sc_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotusp_sc_h (a, b, c);
}

uint32_t
test_sdotusp_sci_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_sdotusp_sc_h (a, 0, b);
}

uint32_t
test_sdotusp_sc_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotusp_sc_b (a, b, c);
}

uint32_t
test_sdotusp_sci_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_sdotusp_sc_b (a, 0, b);
}

uint32_t
test_sdotsp_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotsp_h (a, b, c);
}

uint32_t
test_sdotsp_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotsp_b (a, b, c);
}

uint32_t
test_sdotsp_sc_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotsp_sc_h (a, b, c);
}

uint32_t
test_sdotsp_sci_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_sdotsp_sc_h (a, 0, b);
}

uint32_t
test_sdotsp_sc_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_sdotsp_sc_b (a, b, c);
}

uint32_t
test_sdotsp_sci_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_sdotsp_sc_b (a, 0, b);
}

uint32_t
test_extract_h (uint32_t a)
{
  return __riscv_cv_simd_extract_h (a, 0);
}

uint32_t
test_extract_b (uint32_t a)
{
  return __riscv_cv_simd_extract_b (a, 0);
}

uint32_t
test_extractu_h (uint32_t a)
{
  return __riscv_cv_simd_extractu_h (a, 0);
}

uint32_t
test_extractu_b (uint32_t a)
{
  return __riscv_cv_simd_extractu_b (a, 0);
}

uint32_t
test_shuffle_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_shuffle_h (a, b);
}

uint32_t
test_shuffle_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_shuffle_b (a, b);
}

uint32_t
test_shuffle_sci_h (uint32_t a)
{
  return __riscv_cv_simd_shuffle_sci_h (a, 0);
}

uint32_t
test_shuffleI0_sci_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_shuffle_sci_b (a, 0);
}

uint32_t
test_shuffle2_h (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_shuffle2_h (a, b, c);
}

uint32_t
test_shuffle2_b (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_shuffle2_b (a, b, c);
}

uint32_t
test_packhi_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_packhi_h (a, b);
}

uint32_t
test_packlo_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_packlo_h (a, b);
}

uint32_t
test_cmpeq_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpeq_h (a, b);
}

uint32_t
test_cmpeq_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpeq_b (a, b);
}

uint32_t
test_cmpeq_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpeq_sc_h (a, b);
}

uint32_t
test_cmpeq_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpeq_sc_h (a, 0);
}

uint32_t
test_cmpeq_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpeq_sc_b (a, b);
}

uint32_t
test_cmpeq_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpeq_sc_b (a, 0);
}

uint32_t
test_cmpne_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpne_h (a, b);
}

uint32_t
test_cmpne_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpne_b (a, b);
}

uint32_t
test_cmpne_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpne_sc_h (a, b);
}

uint32_t
test_cmpne_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpne_sc_h (a, 0);
}

uint32_t
test_cmpne_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpne_sc_b (a, b);
}

uint32_t
test_cmpne_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpne_sc_b (a, 0);
}

uint32_t
test_cmpgt_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpgt_h (a, b);
}

uint32_t
test_cmpgt_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpgt_b (a, b);
}

uint32_t
test_cmpgt_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpgt_sc_h (a, b);
}

uint32_t
test_cmpgt_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpgt_sc_h (a, 0);
}

uint32_t
test_cmpgt_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpgt_sc_b (a, b);
}

uint32_t
test_cmpgt_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpgt_sc_b (a, 0);
}

uint32_t
test_cmpge_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpge_h (a, b);
}

uint32_t
test_cmpge_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpge_b (a, b);
}

uint32_t
test_cmpge_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpge_sc_h (a, b);
}

uint32_t
test_cmpge_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpge_sc_h (a, 0);
}

uint32_t
test_cmpge_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpge_sc_b (a, b);
}

uint32_t
test_cmpge_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpge_sc_b (a, 0);
}

uint32_t
test_cmplt_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmplt_h (a, b);
}

uint32_t
test_cmplt_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmplt_b (a, b);
}

uint32_t
test_cmplt_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmplt_sc_h (a, b);
}

uint32_t
test_cmplt_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmplt_sc_h (a, 0);
}

uint32_t
test_cmplt_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmplt_sc_b (a, b);
}

uint32_t
test_cmplt_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmplt_sc_b (a, 0);
}

uint32_t
test_cmple_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmple_h (a, b);
}

uint32_t
test_cmple_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmple_b (a, b);
}

uint32_t
test_cmple_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmple_sc_h (a, b);
}

uint32_t
test_cmple_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmple_sc_h (a, 0);
}

uint32_t
test_cmple_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmple_sc_b (a, b);
}

uint32_t
test_cmple_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmple_sc_b (a, 0);
}

uint32_t
test_cmpgtu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpgtu_h (a, b);
}

uint32_t
test_cmpgtu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpgtu_b (a, b);
}

uint32_t
test_cmpgtu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpgtu_sc_h (a, b);
}

uint32_t
test_cmpgtu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpgtu_sc_h (a, 0);
}

uint32_t
test_cmpgtu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpgtu_sc_b (a, b);
}

uint32_t
test_cmpgtu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpgtu_sc_b (a, 0);
}

uint32_t
test_cmpgeu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpgeu_h (a, b);
}

uint32_t
test_cmpgeu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpgeu_b (a, b);
}

uint32_t
test_cmpgeu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpgeu_sc_h (a, b);
}

uint32_t
test_cmpgeu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpgeu_sc_h (a, 0);
}

uint32_t
test_cmpgeu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpgeu_sc_b (a, b);
}

uint32_t
test_cmpgeu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpgeu_sc_b (a, 0);
}

uint32_t
test_cmpltu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpltu_h (a, b);
}

uint32_t
test_cmpltu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpltu_b (a, b);
}

uint32_t
test_cmpltu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpltu_sc_h (a, b);
}

uint32_t
test_cmpltu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpltu_sc_h (a, 0);
}

uint32_t
test_cmpltu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpltu_sc_b (a, b);
}

uint32_t
test_cmpltu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpltu_sc_b (a, 0);
}

uint32_t
test_cmpleu_h (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpleu_h (a, b);
}

uint32_t
test_cmpleu_b (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_cmpleu_b (a, b);
}

uint32_t
test_cmpleu_sc_h (uint32_t a, uint16_t b)
{
  return __riscv_cv_simd_cmpleu_sc_h (a, b);
}

uint32_t
test_cmpleu_sci_h (uint32_t a)
{
  return __riscv_cv_simd_cmpleu_sc_h (a, 0);
}

uint32_t
test_cmpleu_sc_b (uint32_t a, uint8_t b)
{
  return __riscv_cv_simd_cmpleu_sc_b (a, b);
}

uint32_t
test_cmpleu_sci_b (uint32_t a)
{
  return __riscv_cv_simd_cmpleu_sc_b (a, 0);
}

uint32_t
test_cplxmul_r (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_cplxmul_r (a, b, c, 0);
}

uint32_t
test_cplxmul_i (uint32_t a, uint32_t b, uint32_t c)
{
  return __riscv_cv_simd_cplxmul_i (a, b, c, 0);
}

uint32_t
test_cplxconj (uint32_t a)
{
  return __riscv_cv_simd_cplxconj (a);
}

uint32_t
test_subrotmj (uint32_t a, uint32_t b)
{
  return __riscv_cv_simd_subrotmj (a, b, 0);
}
