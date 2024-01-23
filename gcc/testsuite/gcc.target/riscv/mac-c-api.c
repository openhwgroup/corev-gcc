/* { dg-do compile } */
/* { dg-require-effective-target cv_mac } */
/* { dg-options "-march=rv32i_xcvmac -mabi=ilp32" } */

#include <stdint.h>
#include <riscv_corev_mac.h>

int32_t
test_mac_mac(int32_t x, int32_t y, int32_t z)
{
  return __riscv_cv_mac_mac(x, y, z);
}

int32_t
test_mac_msu(int32_t x, int32_t y, int32_t z)
{
  return __riscv_cv_mac_msu(x, y, z);
}

uint32_t
test_mac_muluN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_muluN(x, y, 0);
}

uint32_t
test_mac_mulhhuN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_mulhhuN(x, y, 0);
}

int32_t
test_mac_mulsN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_mulsN(x, y, 0);
}

int32_t
test_mac_mulhhsN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_mulhhsN(x, y, 0);
}

uint32_t
test_mac_muluRN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_muluRN(x, y, 0);
}

uint32_t
test_mac_mulhhuRN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_mulhhuRN(x, y, 0);
}

int32_t
test_mac_mulsRN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_mulsRN(x, y, 0);
}

int32_t
test_mac_mulhhsRN(uint32_t x, uint32_t y)
{
  return __riscv_cv_mac_mulhhsRN(x, y, 0);
}

uint32_t
test_mac_macuN(uint32_t x, uint32_t y, uint32_t z)
{
  return __riscv_cv_mac_macuN(x, y, z, 0);
}

uint32_t
test_mac_machhuN(uint32_t x, uint32_t y, uint32_t z)
{
  return __riscv_cv_mac_machhuN(x, y, z, 0);
}

int32_t
test_mac_macsN(uint32_t x, uint32_t y, int32_t z)
{
  return __riscv_cv_mac_macsN(x, y, z, 0);
}

int32_t
test_mac_machhsN(uint32_t x, uint32_t y, int32_t z)
{
  return __riscv_cv_mac_machhsN(x, y, z, 0);
}

uint32_t
test_mac_macuRN(uint32_t x, uint32_t y, uint32_t z)
{
  return __riscv_cv_mac_macuRN(x, y, z, 0);
}

uint32_t
test_mac_machhuRN(uint32_t x, uint32_t y, uint32_t z)
{
  return __riscv_cv_mac_machhuRN(x, y, z, 0);
}

int32_t
test_mac_macsRN(uint32_t x, uint32_t y, int32_t z)
{
  return __riscv_cv_mac_macsRN(x, y, z, 0);
}

int32_t
test_mac_machhsRN(uint32_t x, uint32_t y, int32_t z)
{
  return __riscv_cv_mac_machhsRN(x, y, z, 0);
}
