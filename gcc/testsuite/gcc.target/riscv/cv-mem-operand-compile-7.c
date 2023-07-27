/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/*
 * Test for illegal XCVmem specific operands in register-immediate sw.
 */

int
fooSIsigned (signed int* array_int, int i)
{
  array_int [3] = i;
  return array_int [3];
}

int
fooSIunsigned (unsigned int* array_uint, int i)
{
  array_uint [3] = i;
  return array_uint [3];
}

/* { dg-final { scan-assembler-not "cv\\.sw\t" } } */
