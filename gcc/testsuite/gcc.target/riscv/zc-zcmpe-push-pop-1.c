/* { dg-do compile } */
/* { dg-options "-march=rv32e_zcmp -mabi=ilp32e -O0" } */

int foo1(int a)
{
    return a;
}

int foo2(int b)
{
    return foo1(b);
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0},-16" } } */
/* { dg-final { scan-assembler "cm.popret\t{ra,s0},16" } } */
