/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Og" } } */

/*
 * Test for post-inc register-register loads.
 */

int
fooHIunsigned (unsigned short int* array_ushort, int j)
{
  int uns_short_sum = 1;

  for (int i = 0; i < 200; i += j)
  {
    uns_short_sum += *array_ushort;
    array_ushort += j * sizeof (array_ushort);
  }

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lhu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
