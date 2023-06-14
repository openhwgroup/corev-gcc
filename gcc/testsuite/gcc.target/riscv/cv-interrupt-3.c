/* Verify t0 is not saved before use.  */
/* { dg-do compile } */
/* { dg-options "-fomit-frame-pointer" } */
/* { dg-skip-if "" { *-*-* } { "*" } { "-O0" } } */
void __attribute__ ((interrupt ("corev-fast")))
foo (void)
{
  char array[4096];
}
/* { dg-final { scan-assembler-not "s\[wd\]\tt0" } } */
