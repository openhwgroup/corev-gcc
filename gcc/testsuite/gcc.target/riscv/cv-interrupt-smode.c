/* Verify the return instruction is sret.  */
/* { dg-do compile } */
/* { dg-options "" } */
void __attribute__ ((interrupt ("corev-fast", "supervisor")))
foo (void)
{
}
/* { dg-final { scan-assembler "sret" } } */
