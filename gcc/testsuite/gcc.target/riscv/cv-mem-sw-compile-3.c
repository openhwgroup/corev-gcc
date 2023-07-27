/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooSIsigned (signed int* array_int, int i, int j)
{
  int int_sum = 1;

  array_int[i+j] = int_sum;

  return int_sum;
}

int fooSIunsigned (unsigned int* array_uint, int i, int j)
{
  int uns_int_sum = 1;

  array_uint[i+j] = uns_int_sum;

  return uns_int_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sw\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\)" 2 } } */
