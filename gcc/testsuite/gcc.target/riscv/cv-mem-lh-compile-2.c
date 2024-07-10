/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

/*
 * Test for post-inc register-register loads.
 */

int
fooHIsigned (signed short int* array_short, signed short int j)
{
  int short_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    short_sum += *array_short;
    i += j;
    array_short = (signed short int *)((int)array_short + step);
  } while ( i < 200 );

  return short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lh\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
