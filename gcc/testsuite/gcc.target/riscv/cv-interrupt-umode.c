/* Verify the return instruction is uret.  */
/* { dg-do compile } */
/* { dg-options "" } */
void __attribute__ ((interrupt ("corev-fast", "user")))
foo (void)
{
}
/* { dg-final { scan-assembler "uret" } } */
