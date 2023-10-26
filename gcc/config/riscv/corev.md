;; Machine description for CORE-V vendor extensions.
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

(define_c_enum "unspec" [

  ;;CORE-V ALU
  UNSPEC_CV_ALU_CLIP
  UNSPEC_CV_ALU_CLIPR
  UNSPEC_CV_ALU_CLIPU
  UNSPEC_CV_ALU_CLIPUR

  ;;CORE-V EVENT LOAD
  UNSPECV_CV_ELW

  ;;CORE-V BITMANIP
  UNSPEC_CV_BITMANIP_EXTRACT
  UNSPEC_CV_BITMANIP_EXTRACT_INSN
  UNSPEC_CV_BITMANIP_EXTRACTR_INSN
  UNSPEC_CV_BITMANIP_EXTRACTU
  UNSPEC_CV_BITMANIP_EXTRACTU_INSN
  UNSPEC_CV_BITMANIP_EXTRACTUR_INSN
  UNSPEC_CV_BITMANIP_INSERT
  UNSPEC_CV_BITMANIP_INSERT_INSN
  UNSPEC_CV_BITMANIP_INSERTR_INSN
  UNSPEC_CV_BITMANIP_BCLR
  UNSPEC_CV_BITMANIP_BCLR_INSN
  UNSPEC_CV_BITMANIP_BCLRR_INSN
  UNSPEC_CV_BITMANIP_BSET
  UNSPEC_CV_BITMANIP_BSET_INSN
  UNSPEC_CV_BITMANIP_BSETR_INSN
  UNSPEC_CV_BITMANIP_BITREV
  UNSPEC_CV_BITMANIP_FL1

  ;;CORE-V SIMD
  ;;CORE-V SIMD ALU
  UNSPEC_CV_ADD_H
  UNSPEC_CV_ADD_B
  UNSPEC_CV_ADD_SC_H
  UNSPEC_CV_ADD_SC_B
  UNSPEC_CV_SUB_H
  UNSPEC_CV_SUB_B
  UNSPEC_CV_SUB_SC_H
  UNSPEC_CV_SUB_SC_B
  UNSPEC_CV_AVG_H
  UNSPEC_CV_AVG_B
  UNSPEC_CV_AVG_SC_H
  UNSPEC_CV_AVG_SC_B
  UNSPEC_CV_AVGU_H
  UNSPEC_CV_AVGU_B
  UNSPEC_CV_AVGU_SC_H
  UNSPEC_CV_AVGU_SC_B
  UNSPEC_CV_MIN_H
  UNSPEC_CV_MIN_B
  UNSPEC_CV_MIN_SC_H
  UNSPEC_CV_MIN_SC_B
  UNSPEC_CV_MINU_H
  UNSPEC_CV_MINU_B
  UNSPEC_CV_MINU_SC_H
  UNSPEC_CV_MINU_SC_B
  UNSPEC_CV_MAX_H
  UNSPEC_CV_MAX_B
  UNSPEC_CV_MAX_SC_H
  UNSPEC_CV_MAX_SC_B
  UNSPEC_CV_MAXU_H
  UNSPEC_CV_MAXU_B
  UNSPEC_CV_MAXU_SC_H
  UNSPEC_CV_MAXU_SC_B
  UNSPEC_CV_SRL_H
  UNSPEC_CV_SRL_B
  UNSPEC_CV_SRL_SC_H
  UNSPEC_CV_SRL_SC_B
  UNSPEC_CV_SRA_H
  UNSPEC_CV_SRA_B
  UNSPEC_CV_SRA_SC_H
  UNSPEC_CV_SRA_SC_B
  UNSPEC_CV_SLL_H
  UNSPEC_CV_SLL_B
  UNSPEC_CV_SLL_SC_H
  UNSPEC_CV_SLL_SC_B
  UNSPEC_CV_OR_H
  UNSPEC_CV_OR_B
  UNSPEC_CV_OR_SC_H
  UNSPEC_CV_OR_SC_B
  UNSPEC_CV_XOR_H
  UNSPEC_CV_XOR_B
  UNSPEC_CV_XOR_SC_H
  UNSPEC_CV_XOR_SC_B
  UNSPEC_CV_AND_H
  UNSPEC_CV_AND_B
  UNSPEC_CV_AND_SC_H
  UNSPEC_CV_AND_SC_B
  UNSPEC_CV_ABS_H
  UNSPEC_CV_ABS_B
  UNSPEC_CV_NEG_H
  UNSPEC_CV_NEG_B

  ;;CORE-V SIMD BIT MANIPULATION
  UNSPEC_CV_EXTRACT_H
  UNSPEC_CV_EXTRACT_B
  UNSPEC_CV_EXTRACTU_H
  UNSPEC_CV_EXTRACTU_B
  UNSPEC_CV_INSERT_H
  UNSPEC_CV_INSERT_B

  ;;CORE-V SIMD DOT PRODUCT
  UNSPEC_CV_DOTUP_H
  UNSPEC_CV_DOTUP_B
  UNSPEC_CV_DOTUP_SC_H
  UNSPEC_CV_DOTUP_SC_B
  UNSPEC_CV_DOTUSP_H
  UNSPEC_CV_DOTUSP_B
  UNSPEC_CV_DOTUSP_SC_H
  UNSPEC_CV_DOTUSP_SC_B
  UNSPEC_CV_DOTSP_H
  UNSPEC_CV_DOTSP_B
  UNSPEC_CV_DOTSP_SC_H
  UNSPEC_CV_DOTSP_SC_B
  
  UNSPEC_CV_SDOTUP_H
  UNSPEC_CV_SDOTUP_B
  UNSPEC_CV_SDOTUP_SC_H
  UNSPEC_CV_SDOTUP_SC_B
  UNSPEC_CV_SDOTUSP_H
  UNSPEC_CV_SDOTUSP_B
  UNSPEC_CV_SDOTUSP_SC_H
  UNSPEC_CV_SDOTUSP_SC_B
  UNSPEC_CV_SDOTSP_H
  UNSPEC_CV_SDOTSP_B
  UNSPEC_CV_SDOTSP_SC_H
  UNSPEC_CV_SDOTSP_SC_B

  ;;CORE-V SIMD SHUFFLE AND PACK
  UNSPEC_CV_SHUFFLE_H
  UNSPEC_CV_SHUFFLE_SCI_H
  UNSPEC_CV_SHUFFLE_B
  UNSPEC_CV_SHUFFLE_SCI_B
  UNSPEC_CV_SHUFFLE2_H
  UNSPEC_CV_SHUFFLE2_B
  UNSPEC_CV_PACKHI_H
  UNSPEC_CV_PACKLO_H
  UNSPEC_CV_PACKHI_B
  UNSPEC_CV_PACKLO_B

  ;;CORE-V SIMD COMPARISON
  UNSPEC_CV_CMPEQ_H
  UNSPEC_CV_CMPEQ_B
  UNSPEC_CV_CMPEQ_SC_H
  UNSPEC_CV_CMPEQ_SC_B
  UNSPEC_CV_CMPNE_H
  UNSPEC_CV_CMPNE_B
  UNSPEC_CV_CMPNE_SC_H
  UNSPEC_CV_CMPNE_SC_B
  UNSPEC_CV_CMPGT_H
  UNSPEC_CV_CMPGT_B
  UNSPEC_CV_CMPGT_SC_H
  UNSPEC_CV_CMPGT_SC_B
  UNSPEC_CV_CMPGE_H
  UNSPEC_CV_CMPGE_B
  UNSPEC_CV_CMPGE_SC_H
  UNSPEC_CV_CMPGE_SC_B
  UNSPEC_CV_CMPLT_H
  UNSPEC_CV_CMPLT_B
  UNSPEC_CV_CMPLT_SC_H
  UNSPEC_CV_CMPLT_SC_B
  UNSPEC_CV_CMPLE_H
  UNSPEC_CV_CMPLE_B
  UNSPEC_CV_CMPLE_SC_H
  UNSPEC_CV_CMPLE_SC_B
  UNSPEC_CV_CMPGTU_H
  UNSPEC_CV_CMPGTU_B
  UNSPEC_CV_CMPGTU_SC_H
  UNSPEC_CV_CMPGTU_SC_B
  UNSPEC_CV_CMPGEU_H
  UNSPEC_CV_CMPGEU_B
  UNSPEC_CV_CMPGEU_SC_H
  UNSPEC_CV_CMPGEU_SC_B
  UNSPEC_CV_CMPLTU_H
  UNSPEC_CV_CMPLTU_B
  UNSPEC_CV_CMPLTU_SC_H
  UNSPEC_CV_CMPLTU_SC_B
  UNSPEC_CV_CMPLEU_H
  UNSPEC_CV_CMPLEU_B
  UNSPEC_CV_CMPLEU_SC_H
  UNSPEC_CV_CMPLEU_SC_B

  ;;CORE-V SIMD COMPLEX
  UNSPEC_CV_CPLXMUL_R
  UNSPEC_CV_CPLXMUL_I
  UNSPEC_CV_CPLXCONJ
  UNSPEC_CV_SUBROTMJ

  ;; CORE-V HWLP
  UNSPEC_CV_LOOPBUG

])

;; XCVMAC extension.

(define_insn "riscv_cv_mac_mac"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (plus:SI (mult:SI (match_operand:SI 1 "register_operand" "r")
                          (match_operand:SI 2 "register_operand" "r"))
                 (match_operand:SI 3 "register_operand" "0")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mac\t%0,%1,%2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_msu"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (minus:SI (match_operand:SI 3 "register_operand" "0")
                  (mult:SI (match_operand:SI 1 "register_operand" "r")
                           (match_operand:SI 2 "register_operand" "r"))))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.msu\t%0,%1,%2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_muluN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (mult:SI
        (zero_extend:SI
          (truncate:HI
            (match_operand:SI 1 "register_operand" "r")))
        (zero_extend:SI
          (truncate:HI
            (match_operand:SI 2 "register_operand" "r"))))
      (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulun\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhuN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (mult:SI
        (zero_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                         (const_int 16))))
        (zero_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                         (const_int 16)))))
      (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulhhun\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (mult:SI
        (sign_extend:SI
          (truncate:HI
            (match_operand:SI 1 "register_operand" "r")))
        (sign_extend:SI
          (truncate:HI
            (match_operand:SI 2 "register_operand" "r"))))
      (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulsn\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (mult:SI
        (sign_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                         (const_int 16))))
        (sign_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                         (const_int 16)))))
      (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulhhsn\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_muluRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (fma:SI
        (zero_extend:SI
          (truncate:HI
            (match_operand:SI 1 "register_operand" "r")))
        (zero_extend:SI
          (truncate:HI
            (match_operand:SI 2 "register_operand" "r")))
        (if_then_else
          (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
            (minus:QI (match_dup 3)
                      (const_int 1)))
          (const_int 0)))
      (match_dup 3)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulurn\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhuRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (fma:SI
        (zero_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                         (const_int 16))))
        (zero_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                         (const_int 16))))
        (if_then_else
          (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
            (minus:QI (match_dup 3)
                      (const_int 1)))
          (const_int 0)))
      (match_dup 3)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulhhurn\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (fma:SI
        (sign_extend:SI
          (truncate:HI
            (match_operand:SI 1 "register_operand" "r")))
        (sign_extend:SI
          (truncate:HI
            (match_operand:SI 2 "register_operand" "r")))
        (if_then_else
          (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
                     (minus:QI (match_dup 3)
                               (const_int 1)))
          (const_int 0)))
      (match_dup 3)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulsrn\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (fma:SI
        (sign_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                         (const_int 16))))
        (sign_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                         (const_int 16))))
        (if_then_else
          (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
                     (minus:QI (match_dup 3)
                               (const_int 1)))
          (const_int 0)))
      (match_dup 3)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.mulhhsrn\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macuN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (fma:SI
        (zero_extend:SI
          (truncate:HI
            (match_operand:SI 1 "register_operand" "r")))
        (zero_extend:SI
          (truncate:HI
            (match_operand:SI 2 "register_operand" "r")))
        (match_operand:SI 3 "register_operand" "0"))
      (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.macun\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhuN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (fma:SI
        (zero_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                         (const_int 16))))
        (zero_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                         (const_int 16))))
        (match_operand:SI 3 "register_operand" "0"))
      (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.machhun\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (fma:SI
        (sign_extend:SI
          (truncate:HI
            (match_operand:SI 1 "register_operand" "r")))
        (sign_extend:SI
          (truncate:HI
            (match_operand:SI 2 "register_operand" "r")))
        (match_operand:SI 3 "register_operand" "0"))
      (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.macsn\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (fma:SI
        (sign_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                         (const_int 16))))
        (sign_extend:SI
          (truncate:HI
            (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                         (const_int 16))))
        (match_operand:SI 3 "register_operand" "0"))
      (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.machhsn\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macuRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (plus:SI
        (fma:SI
          (zero_extend:SI
            (truncate:HI
              (match_operand:SI 1 "register_operand" "r")))
          (zero_extend:SI
            (truncate:HI
              (match_operand:SI 2 "register_operand" "r")))
          (match_operand:SI 3 "register_operand" "0"))
        (if_then_else
          (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
                     (minus:QI (match_dup 4)
                               (const_int 1)))
          (const_int 0)))
      (match_dup 4)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.macurn\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhuRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (lshiftrt:SI
      (plus:SI
        (fma:SI
          (zero_extend:SI
            (truncate:HI
              (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                           (const_int 16))))
          (zero_extend:SI
            (truncate:HI
              (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                           (const_int 16))))
          (match_operand:SI 3 "register_operand" "0"))
        (if_then_else
          (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
                     (minus:QI (match_dup 4)
                               (const_int 1)))
          (const_int 0)))
      (match_dup 4)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.machhurn\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (plus:SI
        (fma:SI
          (sign_extend:SI
            (truncate:HI
              (match_operand:SI 1 "register_operand" "r")))
          (sign_extend:SI
            (truncate:HI
              (match_operand:SI 2 "register_operand" "r")))
          (match_operand:SI 3 "register_operand" "0"))
        (if_then_else
          (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
                     (minus:QI (match_dup 4)
                               (const_int 1)))
          (const_int 0)))
      (match_dup 4)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.macsrn\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (ashiftrt:SI
      (plus:SI
        (fma:SI
          (sign_extend:SI
            (truncate:HI
              (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
                           (const_int 16))))
          (sign_extend:SI
            (truncate:HI
              (lshiftrt:SI (match_operand:SI 2 "register_operand" "r")
                           (const_int 16))))
          (match_operand:SI 3 "register_operand" "0"))
        (if_then_else
          (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
          (ashift:SI (const_int 1)
                     (minus:QI (match_dup 4)
                               (const_int 1)))
          (const_int 0)))
      (match_dup 4)))]

  "TARGET_XCVMAC && !TARGET_64BIT"
  "cv.machhsrn\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

;; XCVALU builtins

(define_insn "riscv_cv_alu_slet"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (le:SI
      (match_operand:SI 1 "register_operand" "r")
      (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.sle\t%0, %1, %2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_sletu"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (leu:SI
      (match_operand:SI 1 "register_operand" "r")
      (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.sleu\t%0, %1, %2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_min"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (smin:SI
      (match_operand:SI 1 "register_operand" "r")
      (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.min\t%0, %1, %2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_minu"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (umin:SI
      (match_operand:SI 1 "register_operand" "r")
      (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.minu\t%0, %1, %2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_max"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (smax:SI
      (match_operand:SI 1 "register_operand" "r")
      (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.max\t%0, %1, %2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_maxu"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (umax:SI
      (match_operand:SI 1 "register_operand" "r")
      (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.maxu\t%0, %1, %2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_exths"
  [(set (match_operand:SI 0 "register_operand" "=r")
   (sign_extend:SI
     (truncate:HI
       (match_operand:HI 1 "register_operand" "r"))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.exths\t%0, %1"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_exthz"
  [(set (match_operand:SI 0 "register_operand" "=r")
   (zero_extend:SI
     (truncate:HI
       (match_operand:HI 1 "register_operand" "r"))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.exthz\t%0, %1"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_extbs"
  [(set (match_operand:SI 0 "register_operand" "=r")
   (sign_extend:SI
     (truncate:QI
       (match_operand:QI 1 "register_operand" "r"))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.extbs\t%0, %1"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_extbz"
  [(set (match_operand:SI 0 "register_operand" "=r")
   (zero_extend:SI
     (truncate:QI
   (match_operand:QI 1 "register_operand" "r"))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "cv.extbz\t%0, %1"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_clip"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
   (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
               (match_operand:SI 2 "immediate_register_operand" "CVP2,r")]
    UNSPEC_CV_ALU_CLIP))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.clip\t%0,%1,%X2
  cv.clipr\t%0,%1,%2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_clipu"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
   (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
               (match_operand:SI 2 "immediate_register_operand" "CVP2,r")]
    UNSPEC_CV_ALU_CLIPU))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.clipu\t%0,%1,%X2
  cv.clipur\t%0,%1,%2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_addN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (ashiftrt:SI
      (plus:SI
        (match_operand:SI 1 "register_operand" "r,0")
        (match_operand:SI 2 "register_operand" "r,r"))
      (and:SI (match_operand:QI 3 "csr_operand" "K,r")
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.addn\t%0,%1,%2,%3
  cv.addnr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_adduN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (lshiftrt:SI
      (plus:SI
        (match_operand:SI 1 "register_operand" "r,0")
        (match_operand:SI 2 "register_operand" "r,r"))
      (and:SI (match_operand:QI 3 "csr_operand" "K,r")
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.addun\t%0,%1,%2,%3
  cv.addunr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_addRN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (ashiftrt:SI
      (plus:SI
        (plus:SI
          (match_operand:SI 1 "register_operand" "r,0")
          (match_operand:SI 2 "register_operand" "r,r"))
        (if_then_else (eq (match_operand:QI 3 "csr_operand" "K,r")
                          (const_int 0))
          (const_int 1)
          (ashift:SI (const_int 1)
            (minus:QI (match_dup 3)
                      (const_int 1)))))
      (and:SI (match_dup 3)
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.addrn\t%0,%1,%2,%3
  cv.addrnr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_adduRN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (lshiftrt:SI
      (plus:SI
        (plus:SI
          (match_operand:SI 1 "register_operand" "r,0")
          (match_operand:SI 2 "register_operand" "r,r"))
        (if_then_else (eq (match_operand:QI 3 "csr_operand" "K,r")
                          (const_int 0))
          (const_int 1)
          (ashift:SI (const_int 1)
            (minus:QI (match_dup 3)
                      (const_int 1)))))
      (and:SI (match_dup 3)
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.addurn\t%0,%1,%2,%3
  cv.addurnr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_subN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (ashiftrt:SI
      (minus:SI
        (match_operand:SI 1 "register_operand" "r,0")
        (match_operand:SI 2 "register_operand" "r,r"))
      (and:SI (match_operand:QI 3 "csr_operand" "K,r")
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.subn\t%0,%1,%2,%3
  cv.subnr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_subuN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (lshiftrt:SI
      (minus:SI
        (match_operand:SI 1 "register_operand" "r,0")
        (match_operand:SI 2 "register_operand" "r,r"))
      (and:SI (match_operand:QI 3 "csr_operand" "K,r")
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.subun\t%0,%1,%2,%3
  cv.subunr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_subRN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (ashiftrt:SI
      (plus:SI
        (minus:SI
          (match_operand:SI 1 "register_operand" "r,0")
          (match_operand:SI 2 "register_operand" "r,r"))
        (if_then_else (eq (match_operand:QI 3 "csr_operand" "K,r")
                          (const_int 0))
          (const_int 1)
          (ashift:SI (const_int 1)
            (minus:QI (match_dup 3)
                      (const_int 1)))))
      (and:SI (match_dup 3)
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.subrn\t%0,%1,%2,%3
  cv.subrnr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_alu_subuRN"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
    (lshiftrt:SI
      (plus:SI
        (minus:SI
          (match_operand:SI 1 "register_operand" "r,0")
          (match_operand:SI 2 "register_operand" "r,r"))
        (if_then_else (eq (match_operand:QI 3 "csr_operand" "K,r")
                          (const_int 0))
          (const_int 1)
          (ashift:SI (const_int 1)
            (minus:QI (match_dup 3)
                      (const_int 1)))))
      (and:SI (match_dup 3)
              (const_int 31))))]

  "TARGET_XCVALU && !TARGET_64BIT"
  "@
  cv.suburn\t%0,%1,%2,%3
  cv.suburnr\t%0,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

;; XCVELW builtins
(define_insn "riscv_cv_elw_elw_si"
  [(set (match_operand:SI 0 "register_operand" "=r")
  (unspec_volatile [(mem:SI (match_operand:SI 1 "address_operand" "p"))]
  UNSPECV_CV_ELW))]

  "TARGET_XCVELW && !TARGET_64BIT"
  "cv.elw\t%0,%a1"

  [(set_attr "type" "load")
  (set_attr "mode" "SI")])

;; XCVBITMANIP builtins
(define_insn "riscv_cv_bitmanip_extract_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:QI 2 "const_csr_operand" "K")
                   (match_operand:QI 3 "const_csr_operand" "K")]
         UNSPEC_CV_BITMANIP_EXTRACT_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.extract\t%0,%1,%3,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_extractr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_EXTRACTR_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.extractr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

;; Since the expand instruction requires operand 2 to be broken into two smaller operands,
;; a block of c code must be used to ensure the correct values are passed. Hence a define_expand
;; function is used.
(define_expand "riscv_cv_bitmanip_extract"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_EXTRACT))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023) && (INTVAL (operands[2]) >= 0))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_lo);
    rtx t4 = GEN_INT (op2_hi);
    emit_insn (gen_riscv_cv_bitmanip_extract_insn (operands[0], operands[1], t3, t4));
    DONE;
  }
  else if ((GET_CODE (operands[2]) == REG) ||
    (GET_CODE (operands[2]) == SUBREG))
  {
    emit_insn (gen_riscv_cv_bitmanip_extractr_insn (operands[0], operands[1], operands[2]));
    DONE;
  }
  FAIL;
})

(define_insn "riscv_cv_bitmanip_extractu_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:QI 2 "const_csr_operand" "K")
                   (match_operand:QI 3 "const_csr_operand" "K")]
         UNSPEC_CV_BITMANIP_EXTRACTU_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.extractu\t%0,%1,%3,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_extractur_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_EXTRACTUR_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.extractur\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_extractu"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_EXTRACTU))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_lo);
    rtx t4 = GEN_INT (op2_hi);
    emit_insn (gen_riscv_cv_bitmanip_extractu_insn (operands[0], operands[1], t3, t4));
    DONE;
  }
  else if ((GET_CODE (operands[2]) == REG) ||
    (GET_CODE (operands[2]) == SUBREG))
  {
    emit_insn (gen_riscv_cv_bitmanip_extractur_insn (operands[0], operands[1], operands[2]));
    DONE;
  }
  FAIL;
})

(define_insn "riscv_cv_bitmanip_insert_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:QI 2 "const_csr_operand" "K")
                   (match_operand:QI 3 "const_csr_operand" "K")
                   (match_operand:SI 4 "register_operand" "0")]
         UNSPEC_CV_BITMANIP_INSERT_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.insert\t%0,%1,%3,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_insertr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")
                   (match_operand:SI 3 "register_operand" "0")]
         UNSPEC_CV_BITMANIP_INSERTR_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.insertr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_insert"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")
                   (match_operand:SI 3 "register_operand" "0,0")]
         UNSPEC_CV_BITMANIP_INSERT))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    if ((op2_hi + op2_lo) >= 32)
      FAIL;
    rtx t3 = GEN_INT (op2_lo);
    rtx t4 = GEN_INT (op2_hi);
    emit_insn (gen_riscv_cv_bitmanip_insert_insn (operands[0], operands[1], t3, t4, operands[3]));
    DONE;
  }
  else if ((GET_CODE (operands[2]) == REG) ||
    (GET_CODE (operands[2]) == SUBREG))
  {
    emit_insn (gen_riscv_cv_bitmanip_insertr_insn (operands[0], operands[1], operands[2], operands[3]));
    DONE;
  }
  FAIL;
})

(define_insn "riscv_cv_bitmanip_bclr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:QI 2 "const_csr_operand" "K")
                   (match_operand:QI 3 "const_csr_operand" "K")]
         UNSPEC_CV_BITMANIP_BCLR_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.bclr\t%0,%1,%3,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_bclrr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_BCLRR_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.bclrr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_bclr"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_BCLR))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_lo);
    rtx t4 = GEN_INT (op2_hi);
    emit_insn (gen_riscv_cv_bitmanip_bclr_insn (operands[0], operands[1], t3, t4));
    DONE;
  }
  else if ((GET_CODE (operands[2]) == REG) ||
    (GET_CODE (operands[2]) == SUBREG))
  {
    emit_insn (gen_riscv_cv_bitmanip_bclrr_insn (operands[0], operands[1], operands[2]));
    DONE;
  }
  FAIL;
})

(define_insn "riscv_cv_bitmanip_bset_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:QI 2 "const_csr_operand" "K")
                   (match_operand:QI 3 "const_csr_operand" "K")]
         UNSPEC_CV_BITMANIP_BSET_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.bset\t%0,%1,%3,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_bsetr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_BSETR_INSN))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.bsetr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_bset"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_BSET))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_lo);
    rtx t4 = GEN_INT (op2_hi);
    emit_insn (gen_riscv_cv_bitmanip_bset_insn (operands[0], operands[1], t3, t4));
    DONE;
  }
  else if ((GET_CODE (operands[2]) == REG) ||
    (GET_CODE (operands[2]) == SUBREG))
  {
    emit_insn (gen_riscv_cv_bitmanip_bsetr_insn (operands[0], operands[1], operands[2]));
    DONE;
  }
  FAIL;
})

(define_insn "riscv_cv_bitmanip_ff1"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (if_then_else (eq:SI (match_operand:SI 1 "register_operand" "r") (const_int 0))
                      (const_int 32)
                      (minus:SI (ffs:SI (match_dup 1))
                                (const_int 1))))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.ff1\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_fl1"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (unspec:QI [(match_operand:SI 1 "register_operand" "r")]
         UNSPEC_CV_BITMANIP_FL1))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.fl1\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_clb"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (if_then_else (eq:SI (match_operand:SI 1 "register_operand" "r") (const_int 0))
                      (const_int 0)
                      (truncate:QI (clrsb:SI (match_dup 1)))))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.clb\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_cnt"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (truncate:QI (popcount:SI (match_operand:SI 1 "register_operand" "r"))))]
 
  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.cnt\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_ror"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (rotatert:SI (match_operand:SI 1 "register_operand" "r")
                     (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.ror\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_bitrev"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                    (match_operand:QI 2 "const_csr_operand" "K")
                    (match_operand:QI 3 "const_int2_operand" "N")]
         UNSPEC_CV_BITMANIP_BITREV))]

  "TARGET_XCVBITMANIP && !TARGET_64BIT"
  "cv.bitrev\t%0,%1,%3,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

;;CORE-V SIMD
;;CORE-V SIMD ALU
(define_insn "riscv_cv_simd_add_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r,r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r,r,r")
		(match_operand:SI 2 "register_operand" "r,r,r,r")
		(match_operand:QI 3 "const_int2_operand" "J,c01,c02,c03")]
	UNSPEC_CV_ADD_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.add.h\\t%0,%1,%2
   cv.add.div2\\t%0,%1,%2
   cv.add.div4\\t%0,%1,%2
   cv.add.div8\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_add_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_ADD_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.add.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_add_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_ADD_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.add.sci.h\\t%0,%1,%2
   cv.add.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_add_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_ADD_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.add.sci.b\\t%0,%1,%2
   cv.add.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sub_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r,r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r,r,r")
		(match_operand:SI 2 "register_operand" "r,r,r,r")
		(match_operand:QI 3 "const_int2_operand" "J,c01,c02,c03")]
	UNSPEC_CV_SUB_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sub.h\\t%0,%1,%2
   cv.sub.div2\\t%0,%1,%2
   cv.sub.div4\\t%0,%1,%2
   cv.sub.div8\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sub_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SUB_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sub.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sub_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_SUB_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sub.sci.h\\t%0,%1,%2
   cv.sub.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sub_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_SUB_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sub.sci.b\\t%0,%1,%2
   cv.sub.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avg_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_AVG_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.avg.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avg_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_AVG_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.avg.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avg_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_AVG_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.avg.sci.h\\t%0,%1,%2
   cv.avg.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avg_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_AVG_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.avg.sci.b\\t%0,%1,%2
   cv.avg.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avgu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_AVGU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.avgu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avgu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_AVGU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.avgu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avgu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_AVGU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.avgu.sci.h\\t%0,%1,%2
   cv.avgu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_avgu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_AVGU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.avgu.sci.b\\t%0,%1,%2
   cv.avgu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_min_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MIN_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.min.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_min_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MIN_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.min.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_min_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_MIN_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.min.sci.h\\t%0,%1,%2
   cv.min.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_min_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_MIN_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.min.sci.b\\t%0,%1,%2
   cv.min.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_minu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MINU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.minu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_minu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MINU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.minu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_minu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_MINU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.minu.sci.h\\t%0,%1,%2
   cv.minu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_minu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_MINU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.minu.sci.b\\t%0,%1,%2
   cv.minu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_max_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MAX_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.max.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_max_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MAX_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.max.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_max_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_MAX_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.max.sci.h\\t%0,%1,%2
   cv.max.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_max_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_MAX_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.max.sci.b\\t%0,%1,%2
   cv.max.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_maxu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MAXU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.maxu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_maxu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_MAXU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.maxu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_maxu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_MAXU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.maxu.sci.h\\t%0,%1,%2
   cv.maxu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_maxu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_MAXU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.maxu.sci.b\\t%0,%1,%2
   cv.maxu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_srl_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SRL_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.srl.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_srl_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SRL_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.srl.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_srl_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_SRL_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.srl.sci.h\\t%0,%1,%2
   cv.srl.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_srl_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_SRL_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.srl.sci.b\\t%0,%1,%2
   cv.srl.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sra_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SRA_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sra.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sra_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SRA_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sra.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sra_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_SRA_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sra.sci.h\\t%0,%1,%2
   cv.sra.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sra_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_SRA_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sra.sci.b\\t%0,%1,%2
   cv.sra.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sll_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SLL_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sll.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sll_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SLL_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sll.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sll_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_SLL_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sll.sci.h\\t%0,%1,%2
   cv.sll.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sll_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_SLL_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sll.sci.b\\t%0,%1,%2
   cv.sll.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_or_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_OR_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.or.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_or_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_OR_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.or.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_or_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_OR_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.or.sci.h\\t%0,%1,%2
   cv.or.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_or_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_OR_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.or.sci.b\\t%0,%1,%2
   cv.or.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_xor_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_XOR_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.xor.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_xor_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_XOR_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.xor.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_xor_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_XOR_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.xor.sci.h\\t%0,%1,%2
   cv.xor.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_xor_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_XOR_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.xor.sci.b\\t%0,%1,%2
   cv.xor.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_and_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_AND_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.and.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_and_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_AND_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.and.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_and_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_AND_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.and.sci.h\\t%0,%1,%2
   cv.and.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_and_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_AND_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.and.sci.b\\t%0,%1,%2
   cv.and.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_abs_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")]UNSPEC_CV_ABS_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.abs.h\\t%0,%1"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_abs_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")]UNSPEC_CV_ABS_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.abs.b\\t%0,%1"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_neg_h_si"
        [(set (match_operand:SI 0 "register_operand" "=r")
                (unspec:SI [(match_operand:SI 1 "register_operand" "r")]UNSPEC_CV_NEG_H))]
        "TARGET_XCVSIMD && !TARGET_64BIT"
        "cv.sub.h\\t%0,zero,%1"
        [(set_attr "type" "arith")
        (set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_neg_b_si"
        [(set (match_operand:SI 0 "register_operand" "=r")
                (unspec:SI [(match_operand:SI 1 "register_operand" "r")]UNSPEC_CV_NEG_B))]
        "TARGET_XCVSIMD && !TARGET_64BIT"
        "cv.sub.b\\t%0,zero,%1"
        [(set_attr "type" "arith")
        (set_attr "mode" "SI")])


;;CORE-V SIMD BIT MANIPULATION
(define_insn "riscv_cv_simd_extract_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:QI 2 "immediate_operand" "CVs6")]
	UNSPEC_CV_EXTRACT_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.extract.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_extract_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:QI 2 "immediate_operand" "CVs6")]
	UNSPEC_CV_EXTRACT_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.extract.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_extractu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:QI 2 "immediate_operand" "CVs6")]
	UNSPEC_CV_EXTRACTU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.extractu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_extractu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:QI 2 "immediate_operand" "CVs6")]
	UNSPEC_CV_EXTRACTU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.extractu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_insert_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "0")
		(match_operand:QI 3 "immediate_operand" "CVs6")]
	UNSPEC_CV_INSERT_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.insert.h\\t%0,%1,%3"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_insert_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "0")
		(match_operand:QI 3 "immediate_operand" "CVs6")]
	UNSPEC_CV_INSERT_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.insert.b\\t%0,%1,%3"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


;;CORE-V SIMD DOT PRODUCT
(define_insn "riscv_cv_simd_dotup_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_DOTUP_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.dotup.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotup_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_DOTUP_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.dotup.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotup_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_DOTUP_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.dotup.sci.h\\t%0,%1,%2
   cv.dotup.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotup_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_DOTUP_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.dotup.sci.b\\t%0,%1,%2
   cv.dotup.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotusp_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_DOTUSP_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.dotusp.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotusp_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_DOTUSP_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.dotusp.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotusp_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_DOTUSP_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.dotusp.sci.h\\t%0,%1,%2
   cv.dotusp.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotusp_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_DOTUSP_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.dotusp.sci.b\\t%0,%1,%2
   cv.dotusp.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotsp_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_DOTSP_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.dotsp.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotsp_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_DOTSP_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.dotsp.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotsp_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_DOTSP_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.dotsp.sci.h\\t%0,%1,%2
   cv.dotsp.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_dotsp_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_DOTSP_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.dotsp.sci.b\\t%0,%1,%2
   cv.dotsp.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotup_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SDOTUP_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sdotup.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotup_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SDOTUP_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sdotup.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotup_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")
		(match_operand:SI 3 "register_operand" "0,0")]
	UNSPEC_CV_SDOTUP_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sdotup.sci.h\\t%0,%1,%2
   cv.sdotup.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotup_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")
		(match_operand:SI 3 "register_operand" "0,0")]
	UNSPEC_CV_SDOTUP_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sdotup.sci.b\\t%0,%1,%2
   cv.sdotup.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotusp_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SDOTUSP_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sdotusp.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotusp_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SDOTUSP_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sdotusp.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotusp_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")
		(match_operand:SI 3 "register_operand" "0,0")]
	UNSPEC_CV_SDOTUSP_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sdotusp.sci.h\\t%0,%1,%2
   cv.sdotusp.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotusp_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")
		(match_operand:SI 3 "register_operand" "0,0")]
	UNSPEC_CV_SDOTUSP_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sdotusp.sci.b\\t%0,%1,%2
   cv.sdotusp.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotsp_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SDOTSP_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sdotsp.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotsp_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SDOTSP_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.sdotsp.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotsp_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")
		(match_operand:SI 3 "register_operand" "0,0")]
	UNSPEC_CV_SDOTSP_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sdotsp.sci.h\\t%0,%1,%2
   cv.sdotsp.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_sdotsp_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")
		(match_operand:SI 3 "register_operand" "0,0")]
	UNSPEC_CV_SDOTSP_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.sdotsp.sci.b\\t%0,%1,%2
   cv.sdotsp.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


;;CORE-V SIMD SHUFFLE AND PACK
(define_insn "riscv_cv_simd_shuffle_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SHUFFLE_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.shuffle.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_shuffle_sci_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:QI 2 "const_int6_operand" "CVu6")]
	UNSPEC_CV_SHUFFLE_SCI_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.shuffle.sci.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_shuffle_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_SHUFFLE_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.shuffle.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])
	

(define_insn "riscv_cv_simd_shuffle_sci_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r,r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r,r,r")
		(match_operand:QI 2 "const_int_operand" "CVu6,CVi1,CVi2,CVi3")]
	UNSPEC_CV_SHUFFLE_SCI_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.shufflei0.sci.b\\t%0,%1,%Y2
   cv.shufflei1.sci.b\\t%0,%1,%Y2
   cv.shufflei2.sci.b\\t%0,%1,%Y2
   cv.shufflei3.sci.b\\t%0,%1,%Y2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_shuffle2_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SHUFFLE2_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.shuffle2.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_shuffle2_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_SHUFFLE2_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.shuffle2.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_packhi_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_PACKHI_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.pack.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_packlo_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_PACKLO_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.pack\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_packhi_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_PACKHI_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.packhi.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_packlo_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")
		(match_operand:SI 3 "register_operand" "0")]
	UNSPEC_CV_PACKLO_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.packlo.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


;;CORE-V SIMD COMPARISON
(define_insn "riscv_cv_simd_cmpeq_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPEQ_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpeq.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpeq_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPEQ_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpeq.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpeq_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPEQ_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpeq.sci.h\\t%0,%1,%2
   cv.cmpeq.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpeq_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPEQ_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpeq.sci.b\\t%0,%1,%2
   cv.cmpeq.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpne_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPNE_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpne.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpne_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPNE_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpne.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpne_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPNE_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpne.sci.h\\t%0,%1,%2
   cv.cmpne.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpne_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPNE_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpne.sci.b\\t%0,%1,%2
   cv.cmpne.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgt_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGT_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpgt.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgt_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGT_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpgt.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgt_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPGT_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpgt.sci.h\\t%0,%1,%2
   cv.cmpgt.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgt_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPGT_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpgt.sci.b\\t%0,%1,%2
   cv.cmpgt.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpge_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGE_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpge.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpge_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGE_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpge.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpge_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPGE_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpge.sci.h\\t%0,%1,%2
   cv.cmpge.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpge_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPGE_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpge.sci.b\\t%0,%1,%2
   cv.cmpge.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmplt_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLT_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmplt.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmplt_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLT_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmplt.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmplt_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPLT_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmplt.sci.h\\t%0,%1,%2
   cv.cmplt.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmplt_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPLT_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmplt.sci.b\\t%0,%1,%2
   cv.cmplt.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmple_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLE_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmple.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmple_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLE_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmple.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmple_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPLE_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmple.sci.h\\t%0,%1,%2
   cv.cmple.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmple_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6s_operand" "CVs6,r")]
	UNSPEC_CV_CMPLE_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmple.sci.b\\t%0,%1,%2
   cv.cmple.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgtu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGTU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpgtu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgtu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGTU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpgtu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgtu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPGTU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpgtu.sci.h\\t%0,%1,%2
   cv.cmpgtu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgtu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPGTU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpgtu.sci.b\\t%0,%1,%2
   cv.cmpgtu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgeu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGEU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpgeu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgeu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPGEU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpgeu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgeu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPGEU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpgeu.sci.h\\t%0,%1,%2
   cv.cmpgeu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpgeu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPGEU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpgeu.sci.b\\t%0,%1,%2
   cv.cmpgeu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpltu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLTU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpltu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpltu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLTU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpltu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpltu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPLTU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpltu.sci.h\\t%0,%1,%2
   cv.cmpltu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpltu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPLTU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpltu.sci.b\\t%0,%1,%2
   cv.cmpltu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpleu_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLEU_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpleu.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpleu_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		(match_operand:SI 2 "register_operand" "r")]
	UNSPEC_CV_CMPLEU_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cmpleu.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpleu_sc_h_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:HI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPLEU_SC_H))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpleu.sci.h\\t%0,%1,%2
   cv.cmpleu.sc.h\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cmpleu_sc_b_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
		(match_operand:QI 2 "int6_operand" "CVu6,r")]
	UNSPEC_CV_CMPLEU_SC_B))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cmpleu.sci.b\\t%0,%1,%2
   cv.cmpleu.sc.b\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


;;CORE-V SIMD COMPLEX
(define_insn "riscv_cv_simd_cplxmul_r_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r,r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r,r,r")
		(match_operand:SI 2 "register_operand" "r,r,r,r")
		(match_operand:SI 3 "register_operand" "0,0,0,0")
		(match_operand:QI 4 "const_int2_operand" "J,c01,c02,c03")]
	UNSPEC_CV_CPLXMUL_R))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cplxmul.r\\t%0,%1,%2
   cv.cplxmul.r.div2\\t%0,%1,%2
   cv.cplxmul.r.div4\\t%0,%1,%2
   cv.cplxmul.r.div8\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cplxmul_i_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r,r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r,r,r")
		(match_operand:SI 2 "register_operand" "r,r,r,r")
		(match_operand:SI 3 "register_operand" "0,0,0,0")
		(match_operand:QI 4 "const_int2_operand" "J,c01,c02,c03")]
	UNSPEC_CV_CPLXMUL_I))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.cplxmul.i\\t%0,%1,%2
   cv.cplxmul.i.div2\\t%0,%1,%2
   cv.cplxmul.i.div4\\t%0,%1,%2
   cv.cplxmul.i.div8\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_cplxconj_si"
	[(set (match_operand:SI 0 "register_operand" "=r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r")]
	UNSPEC_CV_CPLXCONJ))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"cv.cplxconj\\t%0,%1"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])


(define_insn "riscv_cv_simd_subrotmj_si"
	[(set (match_operand:SI 0 "register_operand" "=r,r,r,r")
		(unspec:SI [(match_operand:SI 1 "register_operand" "r,r,r,r")
		(match_operand:SI 2 "register_operand" "r,r,r,r")
		(match_operand:QI 3 "const_int2_operand" "J,c01,c02,c03")]
	UNSPEC_CV_SUBROTMJ))]
	"TARGET_XCVSIMD && !TARGET_64BIT"
	"@
   cv.subrotmj\\t%0,%1,%2
   cv.subrotmj.div2\\t%0,%1,%2
   cv.subrotmj.div4\\t%0,%1,%2
   cv.subrotmj.div8\\t%0,%1,%2"
	[(set_attr "type" "arith")
	(set_attr "mode" "SI")])

;; CVBI Builtins
(define_insn "cv_branch<mode>"
  [(set (pc)
	(if_then_else
	 (match_operator 1 "equality_operator"
			 [(match_operand:X 2 "register_operand" "r")
			  (match_operand:X 3 "const_int5s_operand" "BI5")])
	 (label_ref (match_operand 0 "" ""))
	 (pc)))]
  "TARGET_XCVBI"
  "cv.b%C1imm\t%2,%3,%0"
  [(set_attr "type" "branch")
   (set_attr "mode" "none")])

;;CORE-V Post Increment Load/ Store
;; Post Increment Register-Immediate and Register-Register Load/Store
(define_insn "cv_load<mode>_postinc"
   [(set (match_operand:ANYI 0 "register_operand" "=r")
         (match_operand:ANYI 1 "mem_post_inc" "m"))]
  "TARGET_XCVMEM && riscv_legitimate_xcvmem_address_p (<MODE>mode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))"
  "cv.<load>\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "<MODE>")])

(define_insn "cv_load_<optab><SHORT:mode>_postinc"
   [(set (match_operand:SI 0 "register_operand" "=r")
     (any_extend:SI (match_operand:SHORT 1 "mem_post_inc" "m")))]
  "TARGET_XCVMEM && riscv_legitimate_xcvmem_address_p (<MODE>mode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))"
  "cv.<load><u>\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "<MODE>")])

(define_insn "cv_loadsf_postinc_hardfloat"
   [(set (match_operand:SF 0 "register_operand" "=r")
         (match_operand:SF 1 "mem_post_inc" "m"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.lw\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "SF")])

(define_insn "cv_loadsf_postinc_softfloat"
   [(set (match_operand:SF 0 "register_operand" "=r")
         (match_operand:SF 1 "mem_post_inc" "m"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.lw\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "SF")])

(define_insn "cv_loadhf_postinc_hardfloat"
   [(set (match_operand:HF 0 "register_operand" "=r")
         (match_operand:HF 1 "mem_post_inc" "m"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.lh\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "HF")])

(define_insn "cv_loadhf_postinc_softfloat"
   [(set (match_operand:HF 0 "register_operand" "=r")
         (match_operand:HF 1 "mem_post_inc" "m"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.lh\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "HF")])

(define_insn "cv_store<mode>_postinc"
   [(set (match_operand:ANYI 0 "mem_post_inc" "=m")
         (match_operand:ANYI 1 "register_operand" "r"))]
  "TARGET_XCVMEM && riscv_legitimate_xcvmem_address_p (<MODE>mode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))"
  "cv.<store>\t%1,%0"
  [(set_attr "type" "store")
   (set_attr "mode" "<MODE>")])

(define_insn "cv_storesf_postinc_hardfloat"
   [(set (match_operand:SF 0 "mem_post_inc" "=m")
         (match_operand:SF 1 "register_operand" "r"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.sw\t%1,%0"
  [(set_attr "type" "store")
   (set_attr "mode" "SF")])

(define_insn "cv_storesf_postinc_softfloat"
   [(set (match_operand:SF 0 "mem_post_inc" "=m")
         (match_operand:SF 1 "register_operand" "r"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.sw\t%1,%0"
  [(set_attr "type" "store")
   (set_attr "mode" "SF")])

(define_insn "cv_storehf_postinc_hardfloat"
   [(set (match_operand:HF 0 "mem_post_inc" "=m")
         (match_operand:HF 1 "register_operand" "r"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.sh\t%1,%0"
  [(set_attr "type" "store")
   (set_attr "mode" "HF")])

(define_insn "cv_storehf_postinc_softfloat"
   [(set (match_operand:HF 0 "mem_post_inc" "=m")
         (match_operand:HF 1 "register_operand" "r"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.sh\t%1,%0"
  [(set_attr "type" "store")
   (set_attr "mode" "HF")])

;; Normal Register-Register Load/Store
(define_insn "cv_load<mode>"
   [(set (match_operand:ANYI 0 "register_operand" "=r")
         (match_operand:ANYI 1 "mem_plus_reg" "m"))]
  "TARGET_XCVMEM && riscv_legitimate_xcvmem_address_p (<MODE>mode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))"
  "cv.<load>\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "<MODE>")])

(define_insn "cv_load_<optab><SHORT:mode>"
   [(set (match_operand:SI 0 "register_operand" "=r")
     (any_extend:SI (match_operand:SHORT 1 "mem_plus_reg" "m")))]
  "TARGET_XCVMEM && riscv_legitimate_xcvmem_address_p (<MODE>mode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))"
  "cv.<load><u>\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "<MODE>")])

(define_insn "cv_loadsf_hardfloat"
   [(set (match_operand:SF 0 "register_operand" "=r")
         (match_operand:SF 1 "mem_plus_reg" "m"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.lw\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "SF")])

(define_insn "cv_loadsf_softfloat"
   [(set (match_operand:SF 0 "register_operand" "=r")
         (match_operand:SF 1 "mem_plus_reg" "m"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.lw\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "SF")])

(define_insn "cv_loadhf_hardfloat"
   [(set (match_operand:HF 0 "register_operand" "=r")
         (match_operand:HF 1 "mem_plus_reg" "m"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.lh\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "HF")])

(define_insn "cv_loadhf_softfloat"
   [(set (match_operand:HF 0 "register_operand" "=r")
         (match_operand:HF 1 "mem_plus_reg" "m"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[1], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.lh\t%0,%1"
  [(set_attr "type" "load")
   (set_attr "mode" "HF")])

(define_insn "cv_store<mode>"
   [(set (match_operand:ANYI 0 "mem_plus_reg" "=m")
     (match_operand:ANYI 1 "register_operand" "r"))]
  "TARGET_XCVMEM && riscv_legitimate_xcvmem_address_p (<MODE>mode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))"
  "cv.<store>\t%1,%0"
  [(set_attr "type" "store")
   (set_attr "mode" "<MODE>")])

(define_insn "cv_storesf_hardfloat"
  [(set (match_operand:SF 0 "mem_plus_reg"     "=m")
        (match_operand:SF 1 "register_operand" " r"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.sw\t%1,%0"
  [(set_attr "move_type" "store")
   (set_attr "mode" "SF")])

(define_insn "cv_storesf_softfloat"
  [(set (match_operand:SF 0 "mem_plus_reg"     "=m")
        (match_operand:SF 1 "register_operand" " r"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (SFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))"
  "cv.sw\t%1,%0"
  [(set_attr "move_type" "store")
   (set_attr "mode" "SF")])

(define_insn "cv_storehf_hardfloat"
  [(set (match_operand:HF 0 "mem_plus_reg"     "=m")
        (match_operand:HF 1 "register_operand" " r"))]
  "TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.sh\t%1,%0"
  [(set_attr "move_type" "store")
   (set_attr "mode" "HF")])

(define_insn "cv_storehf_softfloat"
  [(set (match_operand:HF 0 "mem_plus_reg"     "=m")
        (match_operand:HF 1 "register_operand" " r"))]
  "!TARGET_HARD_FLOAT && TARGET_XCVMEM
   && riscv_legitimate_xcvmem_address_p (HFmode, XEXP (operands[0], 0), (lra_in_progress || reload_completed))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))"
  "cv.sh\t%1,%0"
  [(set_attr "move_type" "store")
   (set_attr "mode" "HF")])

;; ??? The manual is unclear what the hardware loops actually do.
;; We are just guessing here.
(define_insn "doloop_end_i"
  [(set (pc)
	(if_then_else
	  (ne (match_operand:SI 0 "nonimmediate_operand" "+xcvl0c,xcvl1c")
	      (const_int 1))
	  (label_ref (match_operand 1 "" ""))
	  (pc)))
   (set (match_dup 0)
	(plus:SI (match_dup 0)
		 (const_int -1)))
   (use (match_operand:SI 2 "" "xcvl0s,xcvl1s"))
   (use (match_operand:SI 3 "" "xcvl0e,xcvl1e"))
   (use (match_operand:SI 4 "" "X,X"))]
  "TARGET_XCVHWLP"
{
  unsigned n_nops = 3;
  for (rtx_insn * curr = PREV_INSN (current_output_insn);
       curr && n_nops && !LABEL_P (curr);
       curr = PREV_INSN (curr))
    if (active_insn_p (curr))
      {
	n_nops--;
	if (recog_memoized (curr) == CODE_FOR_doloop_end_i)
	  break;
      }
  while (n_nops--)
    asm_fprintf (asm_out_file, "\tnop\n");
  output_asm_insn ("%4:", operands);
  if (TARGET_RVC)
    asm_fprintf (asm_out_file, ".option rvc\n");
  return "";
}
  [(set_attr "type" "branch")
   (set_attr "length" "0")]
)

(define_expand "doloop_end"
  [(match_operand:SI 0 "nonimmediate_operand" "")
   (match_operand 1 "" "")
   (match_operand 2 "" "")]
  "TARGET_XCVHWLP"
{
  if (GET_MODE (operands[0]) != SImode)
    FAIL;

  rtx_insn *start_label = as_a<rtx_insn *> (operands[1]);

  /* A HW loop must contain at least three insns.  If there are less than
     two insns in the loop, we must add two or more nops, which is worse
     than just using a normal loop with separate decrement and
     branch instructions.  */
  unsigned n_insns = 0;
  /* We must not set the counter register inside the loop, except for the
     increment that'll be folded into the doloop_end.  But that is already
    taken care of by loop_optimize, which creates a new register just for
    counting.  */

  /* If nesting HW loops, the inner loop must be using
     lpspart0, lpend0, lpcount0 .  It's OK if we have more than one inner
     loop, as long as they are not nested into each other; we have already
     checked the nesting depth in riscv_can_use_doloop_p.  */
  bool inner_loop_p = false;
  rtx_insn *bb_last = NULL;
  rtx_insn *bb_succ = NULL;
  for (rtx_insn *insn = start_label; ;
       insn = (insn == bb_last ? bb_succ : NEXT_INSN (insn)))
    {
      if (!insn)
	FAIL;

      /* For: int f (int i, int j) { while (--j) i = (i << 1) - 13; return i; }
	 we get passed a start label that's actually after the final branch.  */

      if (NOTE_INSN_BASIC_BLOCK_P (insn))
	{
	  basic_block bb = NOTE_BASIC_BLOCK (insn);
	  bb_last = BB_END (bb);
	  if (single_succ_p (bb))
	    bb_succ = BB_HEAD (single_succ (bb));
	  else if (recog_memoized (bb_last) == CODE_FOR_doloop_end_i)
	    bb_succ = BB_HEAD (FALLTHRU_EDGE (bb)->dest);
	  else if (bb_last == operands[2])
	    bb_succ = NULL;
	  else
	    FAIL;
	}

      if (NONJUMP_INSN_P (insn))
	n_insns++;
      else if (JUMP_P (insn))
	{
	  if (recog_memoized (insn) == CODE_FOR_doloop_end_i)
	    inner_loop_p = true;
	  else if (insn != operands[2])
	    FAIL;
	  else
	    break;
	}
    }
  /* We have counted in the counter decrement, so we need three insns for the
     cost of the HW loop to be amortized.  */
  if (n_insns < 3)
    FAIL;

  rtx start = gen_rtx_REG (SImode, LPSTART0_REGNUM + (inner_loop_p ? 3 : 0));
  rtx end = gen_rtx_REG (SImode, LPEND0_REGNUM + (inner_loop_p ?  3 : 0));
  rtx ref = gen_rtx_LABEL_REF (SImode, gen_label_rtx ());
  rtx_insn *jump
    = emit_jump_insn (gen_doloop_end_i (operands[0], operands[1],
					start, end, ref));
  add_label_op_ref (jump, ref);
  DONE;
})

; FIXME: should do something about large loops.  We could always split,
; but that'd be wasteful if the loop starts immediately and the end offset
; fits into u12, and we just need to put the loop counter into a general
; purpose register.  Maybe disallow immediate loop count alternatives if
; the loop size is too large for short, but OK for u12 immediate.
; Wrap end label in unspec or not to allow pattern to distinguish loop length?
; Or should we always allocate a scatch when using a loop count immediate, and
; leave the final decision to the assembler (or even linker with relaxation)?
(define_insn_and_split "doloop_begin_i"
  [(set (match_operand:SI 0 "lpstart_reg_op" "=xcvl0s,xcvl1s,xcvl0s,xcvl1s")
	(match_operand:SI 1))
   (set (match_operand:SI 2 "lpend_reg_op" "=xcvl0s,xcvl1s,xcvl0e,xcvl1e")
	(match_operand:SI 3))
   (set (match_operand:SI 4 "register_operand" "=xcvl0s,xcvl1s,xcvl0c,xcvl1c")
	(match_operand:SI 5 "immediate_register_operand" "xcvu12,xcvu12,r,r"))]
  "TARGET_XCVHWLP"
{
  unsigned loopnum = REGNO (operands[0]) - LPSTART0_REGNUM;
  operands[0] = GEN_INT (loopnum);
  if (TARGET_RVC)
    asm_fprintf (asm_out_file, ".balign 4\n"
			       ".option norvc\n");
  if ((which_alternative & 1) == 0)
    return "cv.setupi %0, %5, %3";
  else
    return "cv.setup %0, %5, %3";
}
  "&& GET_CODE (operands[1]) == LABEL_REF
   && !hwloop_setupi_p (insn, operands[1], operands[3])"
  [(set (match_dup 0) (match_dup 1))
   (set (match_dup 2) (match_dup 3))
   (set (match_dup 4) (match_dup 5))]
  ""
  [(set_attr "move_type" "move")
   (set_attr "length" "4")]
)

(define_expand "doloop_begin"
  [(use (match_operand 0 "register_operand"))
   (use (match_operand 1 ""))]
  "TARGET_XCVHWLP"
{
  rtx pat = PATTERN (operands[1]);
  /* ??? cleanup_cfg, called from pass_rtl_loop_done::execute, deletes
     loop latches without updating LABEL_REFS in non-jump instructions
     even when marked with marked with REG_LABEL_OPEREND notes.  */
#if 0
  rtx start_label_ref
    = XEXP (SET_SRC (XVECEXP (pat, 0, 0)), 1);
#else
  rtx lst = gen_rtx_INSN_LIST (VOIDmode, operands[1], NULL_RTX);
  rtx start_label_ref
    = gen_rtx_UNSPEC (SImode, gen_rtvec (1, lst), UNSPEC_CV_LOOPBUG);
#endif
  rtx start_reg = XEXP (XVECEXP (pat, 0, 2), 0);
  rtx end_reg = XEXP (XVECEXP (pat, 0, 3), 0);
  rtx end_label_ref = XEXP (XVECEXP (pat, 0, 4), 0);
  rtx_insn *insn = emit_insn (gen_doloop_begin_i (start_reg, start_label_ref,
						  end_reg, end_label_ref,
						  operands[0], operands[0]));
  //add_label_op_ref (insn, start_label_ref);
  add_label_op_ref (insn, end_label_ref);
  DONE;
})

;; Although cv.start / cv.end / cv.count could be seen as move instructions
;; and therefore belonging to movsi_internal, that is problematic because
;; using them outside loopsetup contexts might confuse the HW loop logic
;; of the processor.  We might model this with UNSPEC_VOLATILEs, but
;; that'd likely get too much into the way of optimizations.
(define_insn "*cv_start"
  [(set (match_operand:SI 0 "lpstart_reg_op" "=xcvl0s,xcvl1s,xcvl0s,xcvl1s")
	(match_operand:SI 1 "label_register_operand" "i,i,r,r"))]
  "TARGET_XCVHWLP"
{
  operands[0] = GEN_INT (REGNO (operands[0]) == LPSTART0_REGNUM ? 0 : 1);
  return REG_P (operands[1]) ? "cv.start %0,%1" : "cv.starti %0, %1";
}
  [(set_attr "move_type" "move")])

(define_insn "*cv_end"
  [(set (match_operand:SI 0 "lpend_reg_op" "=xcvl0e,xcvl1e,xcvl0e,xcvl1e")
	(match_operand:SI 1 "label_register_operand" "i,i,r,r"))]
  "TARGET_XCVHWLP"
{
  operands[0] = GEN_INT (REGNO (operands[0]) == LPEND0_REGNUM ? 0 : 1);
  return REG_P (operands[1]) ? "cv.end %0,%1" : "cv.endi %0, %1";
}
  [(set_attr "move_type" "move")])

(define_insn "*cv_count"
  [(set (match_operand:SI 0 "lpcount_reg_op" "=xcvl0c,xcvl1c,xcvl0c,xcvl1c")
	(match_operand:SI 1 "immediate_register_operand" "xcvu12,xcvu12,r,r"))]
  "TARGET_XCVHWLP"
{
  operands[0] = GEN_INT (REGNO (operands[0]) == LPCOUNT0_REGNUM ? 0 : 1);
  return REG_P (operands[1]) ? "cv.count %0,%1" : "cv.counti %0, %1";
}
  [(set_attr "move_type" "move")])
