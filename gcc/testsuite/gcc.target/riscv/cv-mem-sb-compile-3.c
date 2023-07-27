/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops -fno-tree-vectorize" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooQIsigned (signed char* array_char, int i, int j)
{
  int char_sum = 1;

  array_char[i+j] += char_sum;

  return char_sum;
}

int fooQIunsigned (unsigned char* array_uchar, int i, int j)
{
  int uns_char_sum = 1;

  array_uchar[i+j] += uns_char_sum;

  return uns_char_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sb\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\)" 2 } } */
