/* { dg-do compile } */
/* { dg-options "-march=rv32i_zca -mabi=ilp32" } */

int foo()
{
    asm("c.sw x9, 32(x10)");
}

/* { dg-final { scan-assembler "c.sw x9, 32\\(x10\\)" } } */
