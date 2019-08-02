/* Test the `vdup_ns8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vdup_ns8 (void)
{
  int8x8_t out_int8x8_t;
  int8_t arg0_int8_t;

  out_int8x8_t = vdup_n_s8 (arg0_int8_t);
}

/* { dg-final { scan-assembler "vdup\.8\[ 	\]+\[dD\]\[0-9\]+, (\[rR\]\[0-9\]+|\[dD\]\[0-9\]+\\\[\[0-9\]+\\\])!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
