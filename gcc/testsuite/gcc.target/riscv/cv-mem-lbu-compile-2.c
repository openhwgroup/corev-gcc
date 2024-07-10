/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

/*
 * Test for post-inc register-register loads.
 */

int
fooQIunsigned (unsigned char* array_uchar, int j)
{
  int uns_char_sum = 1;
  int step = j * 2;

  for (int i = 0; i < 5; i += j)
  {
    uns_char_sum += *array_uchar;
    array_uchar += step;
  }

  return uns_char_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lbu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
