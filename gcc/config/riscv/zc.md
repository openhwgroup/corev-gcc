;; Machine description for ZCE extension.
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

(define_insn "*stack_push<mode>"
  [(match_parallel 0 "riscv_stack_push_operation"
    [(set (reg:X SP_REGNUM) (plus:X (reg:X SP_REGNUM)
      (match_operand:X 1 "const_int_operand" "")))])]
  "TARGET_ZCMP"
  "cm.push\t{%L0},%1")

(define_insn "*stack_pop<mode>"
  [(match_parallel 0 "riscv_stack_pop_operation"
    [(set (match_operand:X 1 "register_operand" "")
      (mem:X (plus:X (reg:X SP_REGNUM)
	(match_operand:X 2 "const_int_operand" ""))))])]
  "TARGET_ZCMP"
  {
    return riscv_output_popret_p (operands[0]) ?
	"cm.popret\t{%L0},%s0" :
	"cm.pop\t{%L0},%s0";
  })

(define_insn "*stack_pop_with_return_value<mode>"
  [(match_parallel 0 "riscv_stack_pop_operation"
    [(set (reg:ANYI A0_REGNUM)
      (match_operand:ANYI 1 "pop_return_value_constant" ""))])]
  "TARGET_ZCMP"
  {
    gcc_assert (riscv_output_popret_p (operands[0]));
    return "cm.popretz\t{%L0},%s0";
  })
