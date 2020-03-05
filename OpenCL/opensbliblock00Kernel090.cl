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

 void opensbliblock00Kernel090(const ptr_double Residual4_B0,
  const ptr_double Residual3_B0,
  const ptr_double Residual0_B0,
  const
ptr_double Residual2_B0,
  const ptr_double Residual1_B0,
  ptr_double rhou1_old_B0,
  ptr_double rhou2_old_B0,
  ptr_double rhou0_old_B0,
  ptr_double rho_old_B0,
  ptr_double rhoE_old_B0,
  const double *rkold, const double dt)
{
   OPS_ACCS(rho_old_B0, 0,0,0) = dt*rkold[0]*OPS_ACCS(Residual0_B0, 0,0,0) + OPS_ACCS(rho_old_B0, 0,0,0);

   OPS_ACCS(rhou0_old_B0, 0,0,0) = dt*rkold[0]*OPS_ACCS(Residual1_B0, 0,0,0) + OPS_ACCS(rhou0_old_B0, 0,0,0);

   OPS_ACCS(rhou1_old_B0, 0,0,0) = dt*rkold[0]*OPS_ACCS(Residual2_B0, 0,0,0) + OPS_ACCS(rhou1_old_B0, 0,0,0);

   OPS_ACCS(rhou2_old_B0, 0,0,0) = dt*rkold[0]*OPS_ACCS(Residual3_B0, 0,0,0) + OPS_ACCS(rhou2_old_B0, 0,0,0);

   OPS_ACCS(rhoE_old_B0, 0,0,0) = dt*rkold[0]*OPS_ACCS(Residual4_B0, 0,0,0) + OPS_ACCS(rhoE_old_B0, 0,0,0);

}


__kernel void ops_opensbliblock00Kernel090(
__global const double* restrict arg0,
__global const double* restrict arg1,
__global const double* restrict arg2,
__global const double* restrict arg3,
__global const double* restrict arg4,
__global double* restrict arg5,
__global double* restrict arg6,
__global double* restrict arg7,
__global double* restrict arg8,
__global double* restrict arg9,
const double arg10,
const double dt,
const int base0,
const int base1,
const int base2,
const int base3,
const int base4,
const int base5,
const int base6,
const int base7,
const int base8,
const int base9,
const int size0,
const int size1,
const int size2 ){


  int idx_y = get_global_id(1);
  int idx_z = get_global_id(2);
  int idx_x = get_global_id(0);

  if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
    const ptr_double ptr0 = { &arg0[base0 + idx_x * 1*1 + idx_y * 1*1 * xdim0_opensbliblock00Kernel090 + idx_z * 1*1 * xdim0_opensbliblock00Kernel090 * ydim0_opensbliblock00Kernel090], xdim0_opensbliblock00Kernel090, ydim0_opensbliblock00Kernel090};
    const ptr_double ptr1 = { &arg1[base1 + idx_x * 1*1 + idx_y * 1*1 * xdim1_opensbliblock00Kernel090 + idx_z * 1*1 * xdim1_opensbliblock00Kernel090 * ydim1_opensbliblock00Kernel090], xdim1_opensbliblock00Kernel090, ydim1_opensbliblock00Kernel090};
    const ptr_double ptr2 = { &arg2[base2 + idx_x * 1*1 + idx_y * 1*1 * xdim2_opensbliblock00Kernel090 + idx_z * 1*1 * xdim2_opensbliblock00Kernel090 * ydim2_opensbliblock00Kernel090], xdim2_opensbliblock00Kernel090, ydim2_opensbliblock00Kernel090};
    const ptr_double ptr3 = { &arg3[base3 + idx_x * 1*1 + idx_y * 1*1 * xdim3_opensbliblock00Kernel090 + idx_z * 1*1 * xdim3_opensbliblock00Kernel090 * ydim3_opensbliblock00Kernel090], xdim3_opensbliblock00Kernel090, ydim3_opensbliblock00Kernel090};
    const ptr_double ptr4 = { &arg4[base4 + idx_x * 1*1 + idx_y * 1*1 * xdim4_opensbliblock00Kernel090 + idx_z * 1*1 * xdim4_opensbliblock00Kernel090 * ydim4_opensbliblock00Kernel090], xdim4_opensbliblock00Kernel090, ydim4_opensbliblock00Kernel090};
    ptr_double ptr5 = { &arg5[base5 + idx_x * 1*1 + idx_y * 1*1 * xdim5_opensbliblock00Kernel090 + idx_z * 1*1 * xdim5_opensbliblock00Kernel090 * ydim5_opensbliblock00Kernel090], xdim5_opensbliblock00Kernel090, ydim5_opensbliblock00Kernel090};
    ptr_double ptr6 = { &arg6[base6 + idx_x * 1*1 + idx_y * 1*1 * xdim6_opensbliblock00Kernel090 + idx_z * 1*1 * xdim6_opensbliblock00Kernel090 * ydim6_opensbliblock00Kernel090], xdim6_opensbliblock00Kernel090, ydim6_opensbliblock00Kernel090};
    ptr_double ptr7 = { &arg7[base7 + idx_x * 1*1 + idx_y * 1*1 * xdim7_opensbliblock00Kernel090 + idx_z * 1*1 * xdim7_opensbliblock00Kernel090 * ydim7_opensbliblock00Kernel090], xdim7_opensbliblock00Kernel090, ydim7_opensbliblock00Kernel090};
    ptr_double ptr8 = { &arg8[base8 + idx_x * 1*1 + idx_y * 1*1 * xdim8_opensbliblock00Kernel090 + idx_z * 1*1 * xdim8_opensbliblock00Kernel090 * ydim8_opensbliblock00Kernel090], xdim8_opensbliblock00Kernel090, ydim8_opensbliblock00Kernel090};
    ptr_double ptr9 = { &arg9[base9 + idx_x * 1*1 + idx_y * 1*1 * xdim9_opensbliblock00Kernel090 + idx_z * 1*1 * xdim9_opensbliblock00Kernel090 * ydim9_opensbliblock00Kernel090], xdim9_opensbliblock00Kernel090, ydim9_opensbliblock00Kernel090};
    opensbliblock00Kernel090(ptr0,
                                  ptr1,
                                  ptr2,
                                  ptr3,
                                  ptr4,
                                  ptr5,
                                  ptr6,
                                  ptr7,
                                  ptr8,
                                  ptr9,
                                  &arg10,
                                  dt);
  }

}
