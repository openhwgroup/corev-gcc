;; Machine description for RISC-V Code Size Reduction operations.
;; Copyright (C) 2021 Free Software Foundation, Inc.

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

;; ZCE extension.

(define_insn "*zero_extendsidi2_zcee"
  [(set (match_operand:DI 0 "register_operand" "=r,r")
	(zero_extend:DI (match_operand:SI 1 "nonimmediate_operand" "r,m")))]
  "TARGET_64BIT && TARGET_ZCEE"
  "@
   zext.w\t%0,%1
   lwu\t%0,%1"
  [(set_attr "type" "zce,load")
   (set_attr "mode" "DI")])

(define_insn "*zero_extendhi<GPR:mode>2_zcee"
  [(set (match_operand:GPR 0 "register_operand" "=r,r")
        (zero_extend:GPR (match_operand:HI 1 "nonimmediate_operand" "r,m")))]
  "TARGET_ZCEE"
  "@
   zext.h\t%0,%1
   lhu\t%0,%1"
  [(set_attr "type" "zce,load")
   (set_attr "mode" "<GPR:MODE>")])

(define_insn "*extend<SHORT:mode><SUPERQI:mode>2_zcee"
  [(set (match_operand:SUPERQI   0 "register_operand"     "=r,r")
	(sign_extend:SUPERQI
	    (match_operand:SHORT 1 "nonimmediate_operand" " r,m")))]
  "TARGET_ZCEE"
  "@
   sext.<SHORT:size>\t%0,%1
   l<SHORT:size>\t%0,%1"
  [(set_attr "type" "zce,load")
   (set_attr "mode" "<SUPERQI:MODE>")])

(define_insn "*zero_extendhi<GPR:mode>2_zcee_zh"
  [(set (match_operand:GPR    0 "register_operand"     "=r,r")
	(zero_extend:GPR
	    (match_operand:HI 1 "nonimmediate_operand" " r,m")))]
  "TARGET_ZCEE"
  "@
   zext.h\t%0,%1
   lhu\t%0,%1"
  [(set_attr "type" "zce,load")
   (set_attr "mode" "HI")])
