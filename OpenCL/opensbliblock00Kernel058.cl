//
// auto-generated by ops.py
//

#ifdef OCL_FMA
#pragma OPENCL FP_CONTRACT ON
#else
#pragma OPENCL FP_CONTRACT OFF
#endif
#pragma OPENCL EXTENSION cl_khr_fp64:enable

#define OPS_3D
#define OPS_API 2
#define OPS_NO_GLOBALS
#include "ops_macros.h"
#include "ops_opencl_reduction.h"

#ifndef MIN
#define MIN(a,b) ((a<b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a,b) ((a>b) ? (a) : (b))
#endif
#ifndef SIGN
#define SIGN(a,b) ((b<0.0) ? (a*(-1)) : (a))
#endif
#define OPS_READ 0
#define OPS_WRITE 1
#define OPS_RW 2
#define OPS_INC 3
#define OPS_MIN 4
#define OPS_MAX 5
#define ZERO_double 0.0;
#define INFINITY_double INFINITY;
#define ZERO_float 0.0f;
#define INFINITY_float INFINITY;
#define ZERO_int 0;
#define INFINITY_int INFINITY;
#define ZERO_uint 0;
#define INFINITY_uint INFINITY;
#define ZERO_ll 0;
#define INFINITY_ll INFINITY;
#define ZERO_ull 0;
#define INFINITY_ull INFINITY;
#define ZERO_bool 0;

//user function

void opensbliblock00Kernel058(const ptr_double u0_B0,
  ptr_double wk5_B0, const double inv_2, const double rc7, const double rc8)
{
    OPS_ACCS(wk5_B0, 0,0,0) = inv_2*(-rc7*OPS_ACCS(u0_B0, 0,0,2) + (rc8)*OPS_ACCS(u0_B0, 0,0,1) -
      rc8*OPS_ACCS(u0_B0, 0,0,-1) + (rc7)*OPS_ACCS(u0_B0, 0,0,-2));

}


__kernel void ops_opensbliblock00Kernel058(
__global const double* restrict arg0,
__global double* restrict arg1,
const double inv_2,
const double rc7,
const double rc8,
const int base0,
const int base1,
const int size0,
const int size1,
const int size2 ){


  int idx_y = get_global_id(1);
  int idx_z = get_global_id(2);
  int idx_x = get_global_id(0);

  if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
    const ptr_double ptr0 = { &arg0[base0 + idx_x * 1*1 + idx_y * 1*1 * xdim0_opensbliblock00Kernel058 + idx_z * 1*1 * xdim0_opensbliblock00Kernel058 * ydim0_opensbliblock00Kernel058], xdim0_opensbliblock00Kernel058, ydim0_opensbliblock00Kernel058};
    ptr_double ptr1 = { &arg1[base1 + idx_x * 1*1 + idx_y * 1*1 * xdim1_opensbliblock00Kernel058 + idx_z * 1*1 * xdim1_opensbliblock00Kernel058 * ydim1_opensbliblock00Kernel058], xdim1_opensbliblock00Kernel058, ydim1_opensbliblock00Kernel058};
    opensbliblock00Kernel058(ptr0,
                                  ptr1,
                                  inv_2,
                                  rc7,
                                  rc8);
  }

}
