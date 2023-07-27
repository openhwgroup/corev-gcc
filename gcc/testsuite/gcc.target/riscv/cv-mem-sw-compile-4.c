/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/*
 * Test for illegal normal register-immediate saves.
 */

int fooSIsigned (signed int* array_int, int i)
{
  array_int [3] = i;
  return array_int [3];
}

int fooSIunsigned (unsigned int* array_uint, int i)
{
  array_uint [3] = i;
  return array_uint [3];
}

/* { dg-final { scan-assembler-not "cv\\.sw\t" } } */
