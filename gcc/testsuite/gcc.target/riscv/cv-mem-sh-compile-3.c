/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooHIsigned (signed short int* array_short, int i, int j)
{
  int short_sum = 1;

  array_short[i+j] = short_sum;

  return short_sum;
}

int fooHIunsigned (unsigned short int* array_ushort, int i, int j)
{
  int uns_short_sum = 1;

  array_ushort[i+j] += uns_short_sum;

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sh\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\)" 2 } } */
