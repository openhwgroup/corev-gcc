/* { dg-do compile } */
/* { dg-options "-march=rv32e_zcmp -mabi=ilp32e -O0" } */

void foo2 (int a, int b);

int foo1(int a, int b)
{ 
    if (b < a)
    {
        foo2(a, b);
        foo1(a, b);
    }
    return 0;
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0},-32" } } */
/* { dg-final { scan-assembler "cm.popret\t{ra,s0},32" } } */
