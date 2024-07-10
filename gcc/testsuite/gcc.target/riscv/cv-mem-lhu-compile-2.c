/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

/*
 * Test for post-inc register-register loads.
 */

int
fooHIunsigned (unsigned short* array_ushort, unsigned short j)
{
  int uns_short_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    uns_short_sum += *array_ushort;
    i += j;
    array_ushort = (unsigned short *)((int)array_ushort + step);
  } while (i < 200);

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lhu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
