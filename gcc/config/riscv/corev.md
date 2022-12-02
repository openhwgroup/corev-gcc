;; Machine description for CORE-V operations.
;; Copyright (C) 2011-2020 Free Software Foundation, Inc.
;; Contributed by Nazareno Bruschi (nazareno.bruschi@embecosm.com),
;;		  Enrico Tabanelli (enrico.tabanelli@embecosm.com).
;; Based on MIPS target for GNU compiler.

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

;;
;;  ....................
;;
;;      CORE-V BI INSN
;;
;;  ....................

(define_insn "*cv_branch<mode>_imm"
  [(set (pc)
        (if_then_else
         (match_operator 1 "equality_operator"
                 [(match_operand:X 2 "register_operand" "r")
                  (match_operand:X 3 "branch_simm5_operand" "i")])
         (label_ref (match_operand 0 "" ""))
         (pc)
        )
    )
  ]
  "TARGET_COREV_BI"
	"cv.b%C1imm\t%2,%3,%0";
  [(set_attr "type" "branch")
   (set_attr "mode" "none")]
)
