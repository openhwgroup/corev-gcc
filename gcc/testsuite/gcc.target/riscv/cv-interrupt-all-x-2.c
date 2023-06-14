/* Verify only callee saved X registers are saved.  */
/* { dg-do compile } */
/* { dg-options "-fomit-frame-pointer" } */
void __attribute__ ((interrupt ("corev-fast")))
foo (void)
{
  /* Clobber all registers except sp which is not allowed.  */
  asm volatile ("" : : :  "x0",  "x1",  "x3",  "x4",  "x5",  "x6",  "x7",  "x8",
  	                  "x9", "x10", "x11", "x12", "x13", "x14", "x15", "x16",
  	                 "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24",
  	                 "x25", "x26", "x27", "x28", "x29", "x30", "x31");
}

/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+zero" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+sp" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+gp" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+tp" } } */

/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+ra" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+a\[0-7\]" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+t\[0-6\]" } } */

/* { dg-final { scan-assembler-times "lw\[ \t\]+s0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s7,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s8,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s9,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s10,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s11,\[0-9\]+\\(sp\\)" 1 } } */

/* { dg-final { scan-assembler-times "sw\[ \t\]+s0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s7,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s8,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s9,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s10,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s11,\[0-9\]+\\(sp\\)" 1 } } */
