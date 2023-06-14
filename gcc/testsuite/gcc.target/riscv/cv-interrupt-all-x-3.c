/* Verify a non-leaf interrupt saves all caller saved registers except x0, sp,
   gp, tp.  */
/* { dg-do compile } */
/* { dg-options "-fomit-frame-pointer" } */
extern void bar (void);

void __attribute__ ((interrupt))
foo (void)
{
  bar ();
}

/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+zero" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+sp" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+gp" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+tp" } } */

/* { dg-final { scan-assembler-times "lw\[ \t\]+ra,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+a7,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "lw\[ \t\]+t6,\[0-9\]+\\(sp\\)" 1 } } */

/* { dg-final { scan-assembler-times "sw\[ \t\]+ra,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+a7,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "sw\[ \t\]+t6,\[0-9\]+\\(sp\\)" 1 } } */
