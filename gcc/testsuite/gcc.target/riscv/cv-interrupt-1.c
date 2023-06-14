/* Verify the return instruction is mret.  */
/* { dg-do compile } */
/* { dg-options "" } */
void __attribute__ ((interrupt ("corev-fast")))
foo (void)
{
}
/* { dg-final { scan-assembler "mret" } } */
