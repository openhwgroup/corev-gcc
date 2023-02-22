;; Machine description for RISC-V CORE-V operations.
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

])

(define_insn "riscv_cv_mac_mac"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (fma:SI (match_operand:SI 1 "register_operand" "r")
                (match_operand:SI 2 "register_operand" "r")
                (match_operand:SI 3 "register_operand" "0")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mac\t%0,%1,%2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_msu"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (minus:SI (match_operand:SI 3 "register_operand" "0")
                  (mult:SI (match_operand:SI 1 "register_operand" "r")
                           (match_operand:SI 2 "register_operand" "r"))))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.msu\t%0,%1,%2"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_muluN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (mult:SI (zero_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                              (zero_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r"))))
                     (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.muluN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhuN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (mult:SI (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                              (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16)))))
                     (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mulhhuN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (mult:SI (sign_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                              (sign_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r"))))
                     (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mulsN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (mult:SI (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                              (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16)))))
                     (match_operand:QI 3 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mulhhsN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_muluRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (fma:SI (zero_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                             (zero_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r")))
                             (if_then_else (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
                                           (ashift:SI (const_int 1)
                                                      (minus:QI (match_dup 3)
                                                                (const_int 1)))
                                           (const_int 0)))
                     (match_dup 3)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.muluRN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhuRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (fma:SI (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                             (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16))))
                             (if_then_else (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
                                           (ashift:SI (const_int 1)
                                                      (minus:QI (match_dup 3)
                                                                (const_int 1)))
                                           (const_int 0)))
                     (match_dup 3)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mulhhuRN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (fma:SI (sign_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                             (sign_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r")))
                             (if_then_else (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
                                           (ashift:SI (const_int 1)
                                                      (minus:QI (match_dup 3)
                                                                (const_int 1)))
                                           (const_int 0)))
                     (match_dup 3)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mulsRN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_mulhhsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (fma:SI (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                             (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16))))
                             (if_then_else (ne:QI (match_operand:QI 3 "const_csr_operand" "K") (const_int 0))
                                           (ashift:SI (const_int 1)
                                                      (minus:QI (match_dup 3)
                                                                (const_int 1)))
                                           (const_int 0)))
                     (match_dup 3)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.mulhhsRN\t%0,%1,%2,%3"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macuN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (fma:SI (zero_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                             (zero_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r")))
                             (match_operand:SI 3 "register_operand" "0"))
                     (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.macuN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhuN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (fma:SI (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                             (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16))))
                             (match_operand:SI 3 "register_operand" "0"))
                     (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.machhuN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (fma:SI (sign_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                             (sign_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r")))
                             (match_operand:SI 3 "register_operand" "0"))
                     (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.macsN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhsN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (fma:SI (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                             (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16))))
                             (match_operand:SI 3 "register_operand" "0"))
                     (match_operand:QI 4 "const_csr_operand" "K")))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.machhsN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macuRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (plus:SI (fma:SI (zero_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                                      (zero_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r")))
                                      (match_operand:SI 3 "register_operand" "0"))
                              (if_then_else (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
                                            (ashift:SI (const_int 1)
                                                        (minus:QI (match_dup 4)
                                                                  (const_int 1)))
                                            (const_int 0)))
                     (match_dup 4)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.macuRN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhuRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (lshiftrt:SI (plus:SI (fma:SI (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                                      (zero_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16))))
                                      (match_operand:SI 3 "register_operand" "0"))
                              (if_then_else (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
                                            (ashift:SI (const_int 1)
                                                        (minus:QI (match_dup 4)
                                                                  (const_int 1)))
                                            (const_int 0)))
                     (match_dup 4)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.machhuRN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_macsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (plus:SI (fma:SI (sign_extend:SI (truncate:HI (match_operand:SI 1 "register_operand" "r")))
                                      (sign_extend:SI (truncate:HI (match_operand:SI 2 "register_operand" "r")))
                                      (match_operand:SI 3 "register_operand" "0"))
                              (if_then_else (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
                                            (ashift:SI (const_int 1)
                                                        (minus:QI (match_dup 4)
                                                                  (const_int 1)))
                                            (const_int 0)))
                     (match_dup 4)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.macsRN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_mac_machhsRN"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (ashiftrt:SI (plus:SI (fma:SI (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 1 "register_operand" "r") (const_int 16))))
                                      (sign_extend:SI (truncate:HI (lshiftrt:SI (match_operand:SI 2 "register_operand" "r") (const_int 16))))
                                      (match_operand:SI 3 "register_operand" "0"))
                              (if_then_else (ne:QI (match_operand:QI 4 "const_csr_operand" "K") (const_int 0))
                                            (ashift:SI (const_int 1)
                                                        (minus:QI (match_dup 4)
                                                                  (const_int 1)))
                                            (const_int 0)))
                     (match_dup 4)))]

  "TARGET_XCOREVMAC && !TARGET_64BIT"
  "cv.machhsRN\t%0,%1,%2,%4"
  [(set_attr "type" "arith")
  (set_attr "mode" "SI")])

;; cvbitmanip
(define_insn "riscv_cv_bitmanip_extract_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:QI 2 "const_csr_operand" "K")
                   (match_operand:QI 3 "const_csr_operand" "K")]
         UNSPEC_CV_BITMANIP_EXTRACT_INSN))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.extract\t%0,%1,%2,%3"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_extractr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_EXTRACTR_INSN))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
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

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023) && (INTVAL (operands[2]) >= 0))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_hi);
    rtx t4 = GEN_INT (op2_lo);
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

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.extractu\t%0,%1,%2,%3"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_extractur_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_EXTRACTUR_INSN))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.extractur\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_extractu"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_EXTRACTU))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_hi);
    rtx t4 = GEN_INT (op2_lo);
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

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.insert\t%0,%1,%2,%3"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_insertr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")
                   (match_operand:SI 3 "register_operand" "0")]
         UNSPEC_CV_BITMANIP_INSERTR_INSN))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.insertr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_insert"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")
                   (match_operand:SI 3 "register_operand" "0,0")]
         UNSPEC_CV_BITMANIP_INSERT))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    if ((op2_hi + op2_lo) >= 32)
      FAIL;
    rtx t3 = GEN_INT (op2_hi);
    rtx t4 = GEN_INT (op2_lo);
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

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.bclr\t%0,%1,%2,%3"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_bclrr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_BCLRR_INSN))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.bclrr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_bclr"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_BCLR))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_hi);
    rtx t4 = GEN_INT (op2_lo);
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

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.bset\t%0,%1,%2,%3"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_bsetr_insn"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:HI 2 "register_UHI_operand" "r")]
         UNSPEC_CV_BITMANIP_BSETR_INSN))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.bsetr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_expand "riscv_cv_bitmanip_bset"
  [(set (match_operand:SI 0 "register_operand" "=r,r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r,r")
                   (match_operand:HI 2 "bit_extract_operand" "M,r")]
         UNSPEC_CV_BITMANIP_BSET))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
{
  if ((GET_CODE (operands[2]) == CONST_INT) &&
    (INTVAL (operands[2]) <= 1023))
  {
    int op2_hi = (int)(INTVAL (operands[2]) >> 5);
    int op2_lo = INTVAL (operands[2]) - (op2_hi * 32);
    rtx t3 = GEN_INT (op2_hi);
    rtx t4 = GEN_INT (op2_lo);
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

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.ff1\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_fl1"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (unspec:QI [(match_operand:SI 1 "register_operand" "r")]
         UNSPEC_CV_BITMANIP_FL1))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.fl1\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_clb"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (if_then_else (eq:SI (match_operand:SI 1 "register_operand" "r") (const_int 0))
                      (const_int 0)
                      (truncate:QI (clrsb:SI (match_dup 1)))))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.clb\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_cnt"
  [(set (match_operand:QI 0 "register_operand" "=r")
        (truncate:QI (popcount:SI (match_operand:SI 1 "register_operand" "r"))))]
 
  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.cnt\t%0,%1"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_ror"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (rotatert:SI (match_operand:SI 1 "register_operand" "r")
                     (match_operand:SI 2 "register_operand" "r")))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.ror\t%0,%1,%2"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])

(define_insn "riscv_cv_bitmanip_bitrev"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                    (match_operand:QI 2 "const_csr_operand" "K")
                    (match_operand:QI 3 "const_int2_operand" "N")]
         UNSPEC_CV_BITMANIP_BITREV))]

  "TARGET_XCOREVBITMANIP && !TARGET_64BIT"
  "cv.bitrev\t%0,%1,%2,%3"
  [(set_attr "type" "bitmanip")
  (set_attr "mode" "SI")])
