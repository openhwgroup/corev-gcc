/* { dg-do compile } */
/* { dg-options "-march=rv32i_zcf -mabi=ilp32" } */

int foo()
{
    asm("c.flw fa0, 0(a0)");
}

/* { dg-final { scan-assembler "c.flw fa0, 0\\(a0\\)" } } */
