/* { dg-do compile { target { riscv64*-*-* } } } */
/* { dg-options "-march=rv64gc_zcee -mabi=lp64 -O2" } */
#include <stdint.h>

int64_t sextb(int64_t rs1)
{
    return rs1 << (64 - 8) >> (64 - 8);
}

int64_t sexth(int64_t rs1)
{
    return rs1 << (64 - 16) >> (64 - 16);
}

/* { dg-final { scan-assembler-times "sext.b" 1 } } */
/* { dg-final { scan-assembler-times "sext.h" 1 } } */
