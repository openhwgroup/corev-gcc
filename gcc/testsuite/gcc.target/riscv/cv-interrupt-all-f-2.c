/* Verify only callee saved F registers are saved.  */
/* { dg-do compile } */
/* { dg-options "-fomit-frame-pointer -march=rv32if -mabi=ilp32f" } */
void __attribute__ ((interrupt ("corev-fast")))
foo (void)
{
  asm volatile ("" : : :  "f0",  "f1",  "f2",  "f3",  "f4",  "f5",  "f6",  "f7",
			  "f8",  "f9", "f10", "f11", "f12", "f13", "f14", "f15",
			 "f16", "f17", "f18", "f19", "f20", "f21", "f22", "f23",
			 "f24", "f25", "f26", "f27", "f28", "f29", "f30", "f31"
	       );
}

/* { dg-final { scan-assembler-not "f\[sl\]w\[ \t\]+fa" } } */
/* { dg-final { scan-assembler-not "f\[sl\]w\[ \t\]+ft" } } */

/* { dg-final { scan-assembler-times "flw\[ \t\]+fs0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs7,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs8,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs9,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs10,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "flw\[ \t\]+fs11,\[0-9\]+\\(sp\\)" 1 } } */

/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs0,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs1,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs2,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs3,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs4,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs5,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs6,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs7,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs8,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs9,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs10,\[0-9\]+\\(sp\\)" 1 } } */
/* { dg-final { scan-assembler-times "fsw\[ \t\]+fs11,\[0-9\]+\\(sp\\)" 1 } } */
