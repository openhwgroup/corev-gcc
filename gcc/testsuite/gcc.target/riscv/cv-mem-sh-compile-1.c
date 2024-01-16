/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Og" } } */

/*
 * Test for post-inc register-immediate saves.
 */

int
fooHIsigned (signed short int* array_short)
{
  int short_sum = 1;

  for (int i = 0; i < 200; i++)
    array_short [i] += short_sum;

  return short_sum;
}

int
fooHIunsigned (unsigned short int* array_ushort)
{
  int uns_short_sum = 1;

  for (int i = 0; i < 200; i++)
    array_ushort [i] += uns_short_sum;

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sh\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),2" 2 } } */
