/* Verify all X registers are saved except x0, sp, gp, tp.  */
/* { dg-do compile } */
/* { dg-options "-fomit-frame-pointer" } */
void __attribute__ ((interrupt))
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

/* { dg-final { scan-assembler-times "lw\[ \t\]+ra,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+s1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a7,\[0-9\]+\\(sp\\)" 1 } } */
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
/* { dg-final { scan-assembler-times "lw\[ \t\]+t3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t6,\[0-9\]+\\(sp\\)" 1 } } */

/* { dg-final { scan-assembler-times "sw\[ \t\]+ra,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+s1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a7,\[0-9\]+\\(sp\\)" 1 } } */
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
/* { dg-final { scan-assembler-times "sw\[ \t\]+t3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t6,\[0-9\]+\\(sp\\)" 1 } } */
