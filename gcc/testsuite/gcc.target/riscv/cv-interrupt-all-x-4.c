/* Verify a non-leaf interrupt does not save any caller saved registers.  */
/* { dg-do compile } */
/* { dg-options "-fomit-frame-pointer" } */
extern void bar (void);

void __attribute__ ((interrupt ("corev-fast")))
foo (void)
{
  bar ();
}

/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+zero" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+sp" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+gp" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+tp" } } */

/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+ra" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+a\[0-7\]" } } */
/* { dg-final { scan-assembler-not "\[sl\]w\[ \t\]+t\[0-6\]" } } */
