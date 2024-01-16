/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Os" "-Oz" "-Og" } } */

/*
 * Test for post-inc register-immediate loads.
 */

int
fooQIunsigned (unsigned char* array_uchar, int n)
{
  int uns_char_sum = 1;

  for (int i = 0; i < n; i++)
    uns_char_sum += array_uchar [i];

  return uns_char_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lbu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),1" 1 } } */
