/* { dg-do compile { target { riscv64*-*-* } } } */
/* { dg-options "-march=rv64gc_zcee -mabi=lp64 -O2" } */
#include<stdint.h>

int64_t zextb(int64_t rs1)
{
    return (uint64_t)rs1 << (64 - 8) >> (64 - 8);
}

int64_t zexth(int64_t rs1)
{
    return (uint64_t)rs1 << (64 - 16) >> (64 - 16);
}

int64_t zextw(int64_t rs1)
{
    return (uint64_t)rs1 << (64 - 32) >> (64 - 32);
}

/* { dg-final { scan-assembler-times "andi" 1 } } */
/* { dg-final { scan-assembler-times "zext.h" 1 } } */
/* { dg-final { scan-assembler-times "zext.w" 1 } } */