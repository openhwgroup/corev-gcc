/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */

/*
 * Test for illegal XCVmem specific operands in lw.
 */

int
fooSIsigned (signed int* array_int)
{
  return array_int [3];
}

int
fooSIunsigned (unsigned int* array_uint)
{
  return array_uint [3];
}

/* { dg-final { scan-assembler-not "cv\\.lw\t" } } */
