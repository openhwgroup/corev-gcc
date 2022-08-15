/* { dg-do compile } */
/* { dg-options "-march=rv32i_zcb_zcmp -mabi=ilp32" } */

int foo()
{
    asm("cm.push {ra,s0-s3},-32");
}

/* { dg-final { scan-assembler "cm.push {ra,s0-s3},-32" } } */
