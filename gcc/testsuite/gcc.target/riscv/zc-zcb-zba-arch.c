/* { dg-do compile } */
/* { dg-options "-march=rv32i_zcb_zba -mabi=ilp32" } */

int foo()
{
    asm("c.lbu x9,1(x8)");
}

/* { dg-final { scan-assembler "c.lbu x9,1\\(x8\\)" } } */
