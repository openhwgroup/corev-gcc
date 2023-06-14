/* Verify that arg regs used as temporaries do not get saved.  */
/* { dg-do compile } */
/* { dg-options "" } */
void __attribute__ ((interrupt ("corev-fast")))
foo2 (void)
{
  extern volatile int INTERRUPT_FLAG;
  INTERRUPT_FLAG = 0;

  extern volatile int COUNTER;
  COUNTER++;
}
/* { dg-final { scan-assembler-not "s\[wd\]\ta\[0-7\],\[0-9\]+\\(sp\\)" } } */
