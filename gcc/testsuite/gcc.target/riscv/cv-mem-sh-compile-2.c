/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

/*
 * Test for post-inc register-register saves.
 */

int
fooHIsigned (signed short int* array_short, int j)
{
  int short_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    *array_short += short_sum;
    i += j;
    array_short = (signed short int*)((int)array_short + step);
  } while(i < 200);

  return short_sum;
}

int
fooHIunsigned (unsigned short int* array_ushort, int j)
{
  int uns_short_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    *array_ushort += uns_short_sum;
    i += j;
    array_ushort = (unsigned short int*)((int)array_ushort + step);
  } while(i < 200);

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sh\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 2 } } */
