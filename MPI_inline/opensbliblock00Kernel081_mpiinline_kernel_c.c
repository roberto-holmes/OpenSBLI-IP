//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel081;
int ydim0_opensbliblock00Kernel081;
int xdim1_opensbliblock00Kernel081;
int ydim1_opensbliblock00Kernel081;
int xdim2_opensbliblock00Kernel081;
int ydim2_opensbliblock00Kernel081;
int xdim3_opensbliblock00Kernel081;
int ydim3_opensbliblock00Kernel081;
int xdim4_opensbliblock00Kernel081;
int ydim4_opensbliblock00Kernel081;
int xdim5_opensbliblock00Kernel081;
int ydim5_opensbliblock00Kernel081;
int xdim6_opensbliblock00Kernel081;
int ydim6_opensbliblock00Kernel081;
int xdim7_opensbliblock00Kernel081;
int ydim7_opensbliblock00Kernel081;
int xdim8_opensbliblock00Kernel081;
int ydim8_opensbliblock00Kernel081;
int xdim9_opensbliblock00Kernel081;
int ydim9_opensbliblock00Kernel081;
int xdim10_opensbliblock00Kernel081;
int ydim10_opensbliblock00Kernel081;
int xdim11_opensbliblock00Kernel081;
int ydim11_opensbliblock00Kernel081;
int xdim12_opensbliblock00Kernel081;
int ydim12_opensbliblock00Kernel081;
int xdim13_opensbliblock00Kernel081;
int ydim13_opensbliblock00Kernel081;
int xdim14_opensbliblock00Kernel081;
int ydim14_opensbliblock00Kernel081;
int xdim15_opensbliblock00Kernel081;
int ydim15_opensbliblock00Kernel081;
int xdim16_opensbliblock00Kernel081;
int ydim16_opensbliblock00Kernel081;
int xdim17_opensbliblock00Kernel081;
int ydim17_opensbliblock00Kernel081;
int xdim18_opensbliblock00Kernel081;
int ydim18_opensbliblock00Kernel081;
int xdim19_opensbliblock00Kernel081;
int ydim19_opensbliblock00Kernel081;
int xdim20_opensbliblock00Kernel081;
int ydim20_opensbliblock00Kernel081;
int xdim21_opensbliblock00Kernel081;
int ydim21_opensbliblock00Kernel081;
int xdim22_opensbliblock00Kernel081;
int ydim22_opensbliblock00Kernel081;
int xdim23_opensbliblock00Kernel081;
int ydim23_opensbliblock00Kernel081;
int xdim24_opensbliblock00Kernel081;
int ydim24_opensbliblock00Kernel081;
int xdim25_opensbliblock00Kernel081;
int ydim25_opensbliblock00Kernel081;
int xdim26_opensbliblock00Kernel081;
int ydim26_opensbliblock00Kernel081;
int xdim27_opensbliblock00Kernel081;
int ydim27_opensbliblock00Kernel081;
int xdim28_opensbliblock00Kernel081;
int ydim28_opensbliblock00Kernel081;
int xdim29_opensbliblock00Kernel081;
int ydim29_opensbliblock00Kernel081;
int xdim30_opensbliblock00Kernel081;
int ydim30_opensbliblock00Kernel081;
int xdim31_opensbliblock00Kernel081;
int ydim31_opensbliblock00Kernel081;
int xdim32_opensbliblock00Kernel081;
int ydim32_opensbliblock00Kernel081;
int xdim33_opensbliblock00Kernel081;
int ydim33_opensbliblock00Kernel081;


//user function



void opensbliblock00Kernel081_c_wrapper(
  double * restrict wk8_B0_p,
  double * restrict wk5_B0_p,
  double * restrict u2_B0_p,
  double * restrict wk23_B0_p,
  double * restrict wk17_B0_p,
  double * restrict wk16_B0_p,
  double * restrict wk13_B0_p,
  double * restrict u0_B0_p,
  double * restrict wk9_B0_p,
  double * restrict wk22_B0_p,
  double * restrict wk21_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk10_B0_p,
  double * restrict wk12_B0_p,
  double * restrict u1_B0_p,
  double * restrict wk14_B0_p,
  double * restrict wk24_B0_p,
  double * restrict wk26_B0_p,
  double * restrict wk3_B0_p,
  double * restrict wk0_B0_p,
  double * restrict wk19_B0_p,
  double * restrict wk25_B0_p,
  double * restrict wk20_B0_p,
  double * restrict wk18_B0_p,
  double * restrict wk11_B0_p,
  double * restrict wk6_B0_p,
  double * restrict wk4_B0_p,
  double * restrict wk15_B0_p,
  double * restrict wk7_B0_p,
  double * restrict wk2_B0_p,
  double * restrict Residual4_B0_p,
  double * restrict Residual3_B0_p,
  double * restrict Residual2_B0_p,
  double * restrict Residual1_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double wk8_B0 = { wk8_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel081*1 + n_z * xdim0_opensbliblock00Kernel081 * ydim0_opensbliblock00Kernel081*1, xdim0_opensbliblock00Kernel081, ydim0_opensbliblock00Kernel081};
        const ptr_double wk5_B0 = { wk5_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel081*1 + n_z * xdim1_opensbliblock00Kernel081 * ydim1_opensbliblock00Kernel081*1, xdim1_opensbliblock00Kernel081, ydim1_opensbliblock00Kernel081};
        const ptr_double u2_B0 = { u2_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel081*1 + n_z * xdim2_opensbliblock00Kernel081 * ydim2_opensbliblock00Kernel081*1, xdim2_opensbliblock00Kernel081, ydim2_opensbliblock00Kernel081};
        const ptr_double wk23_B0 = { wk23_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel081*1 + n_z * xdim3_opensbliblock00Kernel081 * ydim3_opensbliblock00Kernel081*1, xdim3_opensbliblock00Kernel081, ydim3_opensbliblock00Kernel081};
        const ptr_double wk17_B0 = { wk17_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel081*1 + n_z * xdim4_opensbliblock00Kernel081 * ydim4_opensbliblock00Kernel081*1, xdim4_opensbliblock00Kernel081, ydim4_opensbliblock00Kernel081};
        const ptr_double wk16_B0 = { wk16_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel081*1 + n_z * xdim5_opensbliblock00Kernel081 * ydim5_opensbliblock00Kernel081*1, xdim5_opensbliblock00Kernel081, ydim5_opensbliblock00Kernel081};
        const ptr_double wk13_B0 = { wk13_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel081*1 + n_z * xdim6_opensbliblock00Kernel081 * ydim6_opensbliblock00Kernel081*1, xdim6_opensbliblock00Kernel081, ydim6_opensbliblock00Kernel081};
        const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel081*1 + n_z * xdim7_opensbliblock00Kernel081 * ydim7_opensbliblock00Kernel081*1, xdim7_opensbliblock00Kernel081, ydim7_opensbliblock00Kernel081};
        const ptr_double wk9_B0 = { wk9_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel081*1 + n_z * xdim8_opensbliblock00Kernel081 * ydim8_opensbliblock00Kernel081*1, xdim8_opensbliblock00Kernel081, ydim8_opensbliblock00Kernel081};
        const ptr_double wk22_B0 = { wk22_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel081*1 + n_z * xdim9_opensbliblock00Kernel081 * ydim9_opensbliblock00Kernel081*1, xdim9_opensbliblock00Kernel081, ydim9_opensbliblock00Kernel081};
        const ptr_double wk21_B0 = { wk21_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel081*1 + n_z * xdim10_opensbliblock00Kernel081 * ydim10_opensbliblock00Kernel081*1, xdim10_opensbliblock00Kernel081, ydim10_opensbliblock00Kernel081};
        const ptr_double wk1_B0 = { wk1_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel081*1 + n_z * xdim11_opensbliblock00Kernel081 * ydim11_opensbliblock00Kernel081*1, xdim11_opensbliblock00Kernel081, ydim11_opensbliblock00Kernel081};
        const ptr_double wk10_B0 = { wk10_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel081*1 + n_z * xdim12_opensbliblock00Kernel081 * ydim12_opensbliblock00Kernel081*1, xdim12_opensbliblock00Kernel081, ydim12_opensbliblock00Kernel081};
        const ptr_double wk12_B0 = { wk12_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel081*1 + n_z * xdim13_opensbliblock00Kernel081 * ydim13_opensbliblock00Kernel081*1, xdim13_opensbliblock00Kernel081, ydim13_opensbliblock00Kernel081};
        const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel081*1 + n_z * xdim14_opensbliblock00Kernel081 * ydim14_opensbliblock00Kernel081*1, xdim14_opensbliblock00Kernel081, ydim14_opensbliblock00Kernel081};
        const ptr_double wk14_B0 = { wk14_B0_p + n_x*1 + n_y * xdim15_opensbliblock00Kernel081*1 + n_z * xdim15_opensbliblock00Kernel081 * ydim15_opensbliblock00Kernel081*1, xdim15_opensbliblock00Kernel081, ydim15_opensbliblock00Kernel081};
        const ptr_double wk24_B0 = { wk24_B0_p + n_x*1 + n_y * xdim16_opensbliblock00Kernel081*1 + n_z * xdim16_opensbliblock00Kernel081 * ydim16_opensbliblock00Kernel081*1, xdim16_opensbliblock00Kernel081, ydim16_opensbliblock00Kernel081};
        const ptr_double wk26_B0 = { wk26_B0_p + n_x*1 + n_y * xdim17_opensbliblock00Kernel081*1 + n_z * xdim17_opensbliblock00Kernel081 * ydim17_opensbliblock00Kernel081*1, xdim17_opensbliblock00Kernel081, ydim17_opensbliblock00Kernel081};
        const ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim18_opensbliblock00Kernel081*1 + n_z * xdim18_opensbliblock00Kernel081 * ydim18_opensbliblock00Kernel081*1, xdim18_opensbliblock00Kernel081, ydim18_opensbliblock00Kernel081};
        const ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim19_opensbliblock00Kernel081*1 + n_z * xdim19_opensbliblock00Kernel081 * ydim19_opensbliblock00Kernel081*1, xdim19_opensbliblock00Kernel081, ydim19_opensbliblock00Kernel081};
        const ptr_double wk19_B0 = { wk19_B0_p + n_x*1 + n_y * xdim20_opensbliblock00Kernel081*1 + n_z * xdim20_opensbliblock00Kernel081 * ydim20_opensbliblock00Kernel081*1, xdim20_opensbliblock00Kernel081, ydim20_opensbliblock00Kernel081};
        const ptr_double wk25_B0 = { wk25_B0_p + n_x*1 + n_y * xdim21_opensbliblock00Kernel081*1 + n_z * xdim21_opensbliblock00Kernel081 * ydim21_opensbliblock00Kernel081*1, xdim21_opensbliblock00Kernel081, ydim21_opensbliblock00Kernel081};
        const ptr_double wk20_B0 = { wk20_B0_p + n_x*1 + n_y * xdim22_opensbliblock00Kernel081*1 + n_z * xdim22_opensbliblock00Kernel081 * ydim22_opensbliblock00Kernel081*1, xdim22_opensbliblock00Kernel081, ydim22_opensbliblock00Kernel081};
        const ptr_double wk18_B0 = { wk18_B0_p + n_x*1 + n_y * xdim23_opensbliblock00Kernel081*1 + n_z * xdim23_opensbliblock00Kernel081 * ydim23_opensbliblock00Kernel081*1, xdim23_opensbliblock00Kernel081, ydim23_opensbliblock00Kernel081};
        const ptr_double wk11_B0 = { wk11_B0_p + n_x*1 + n_y * xdim24_opensbliblock00Kernel081*1 + n_z * xdim24_opensbliblock00Kernel081 * ydim24_opensbliblock00Kernel081*1, xdim24_opensbliblock00Kernel081, ydim24_opensbliblock00Kernel081};
        const ptr_double wk6_B0 = { wk6_B0_p + n_x*1 + n_y * xdim25_opensbliblock00Kernel081*1 + n_z * xdim25_opensbliblock00Kernel081 * ydim25_opensbliblock00Kernel081*1, xdim25_opensbliblock00Kernel081, ydim25_opensbliblock00Kernel081};
        const ptr_double wk4_B0 = { wk4_B0_p + n_x*1 + n_y * xdim26_opensbliblock00Kernel081*1 + n_z * xdim26_opensbliblock00Kernel081 * ydim26_opensbliblock00Kernel081*1, xdim26_opensbliblock00Kernel081, ydim26_opensbliblock00Kernel081};
        const ptr_double wk15_B0 = { wk15_B0_p + n_x*1 + n_y * xdim27_opensbliblock00Kernel081*1 + n_z * xdim27_opensbliblock00Kernel081 * ydim27_opensbliblock00Kernel081*1, xdim27_opensbliblock00Kernel081, ydim27_opensbliblock00Kernel081};
        const ptr_double wk7_B0 = { wk7_B0_p + n_x*1 + n_y * xdim28_opensbliblock00Kernel081*1 + n_z * xdim28_opensbliblock00Kernel081 * ydim28_opensbliblock00Kernel081*1, xdim28_opensbliblock00Kernel081, ydim28_opensbliblock00Kernel081};
        const ptr_double wk2_B0 = { wk2_B0_p + n_x*1 + n_y * xdim29_opensbliblock00Kernel081*1 + n_z * xdim29_opensbliblock00Kernel081 * ydim29_opensbliblock00Kernel081*1, xdim29_opensbliblock00Kernel081, ydim29_opensbliblock00Kernel081};
        ptr_double Residual4_B0 = { Residual4_B0_p + n_x*1 + n_y * xdim30_opensbliblock00Kernel081*1 + n_z * xdim30_opensbliblock00Kernel081 * ydim30_opensbliblock00Kernel081*1, xdim30_opensbliblock00Kernel081, ydim30_opensbliblock00Kernel081};
        ptr_double Residual3_B0 = { Residual3_B0_p + n_x*1 + n_y * xdim31_opensbliblock00Kernel081*1 + n_z * xdim31_opensbliblock00Kernel081 * ydim31_opensbliblock00Kernel081*1, xdim31_opensbliblock00Kernel081, ydim31_opensbliblock00Kernel081};
        ptr_double Residual2_B0 = { Residual2_B0_p + n_x*1 + n_y * xdim32_opensbliblock00Kernel081*1 + n_z * xdim32_opensbliblock00Kernel081 * ydim32_opensbliblock00Kernel081*1, xdim32_opensbliblock00Kernel081, ydim32_opensbliblock00Kernel081};
        ptr_double Residual1_B0 = { Residual1_B0_p + n_x*1 + n_y * xdim33_opensbliblock00Kernel081*1 + n_z * xdim33_opensbliblock00Kernel081 * ydim33_opensbliblock00Kernel081*1, xdim33_opensbliblock00Kernel081, ydim33_opensbliblock00Kernel081};
        
    OPS_ACC(Residual1_B0, 0,0,0) = 1.0*rcinv11*((rc9)*OPS_ACC(wk17_B0, 0,0,0) + (rc12)*OPS_ACC(wk24_B0, 0,0,0) +
      OPS_ACC(wk25_B0, 0,0,0) + (rc12)*OPS_ACC(wk3_B0, 0,0,0) + OPS_ACC(wk8_B0, 0,0,0)) +
      OPS_ACC(Residual1_B0, 0,0,0);

    OPS_ACC(Residual2_B0, 0,0,0) = 1.0*rcinv11*(OPS_ACC(wk0_B0, 0,0,0) + (rc9)*OPS_ACC(wk20_B0, 0,0,0) +
      (rc12)*OPS_ACC(wk21_B0, 0,0,0) + OPS_ACC(wk4_B0, 0,0,0) + (rc12)*OPS_ACC(wk9_B0, 0,0,0)) +
      OPS_ACC(Residual2_B0, 0,0,0);

    OPS_ACC(Residual3_B0, 0,0,0) = 1.0*rcinv11*(OPS_ACC(wk11_B0, 0,0,0) + (rc9)*OPS_ACC(wk14_B0, 0,0,0) +
      (rc12)*OPS_ACC(wk16_B0, 0,0,0) + OPS_ACC(wk18_B0, 0,0,0) + (rc12)*OPS_ACC(wk23_B0, 0,0,0)) +
      OPS_ACC(Residual3_B0, 0,0,0);

    OPS_ACC(Residual4_B0, 0,0,0) = 1.0*rcinv11*rcinv13*rcinv14*(OPS_ACC(wk12_B0, 0,0,0) + OPS_ACC(wk19_B0, 0,0,0)
      + OPS_ACC(wk1_B0, 0,0,0))/(gama - 1) + 1.0*rcinv11*(OPS_ACC(wk10_B0, 0,0,0) +
      OPS_ACC(wk7_B0, 0,0,0))*OPS_ACC(wk10_B0, 0,0,0) + 1.0*rcinv11*(OPS_ACC(wk10_B0, 0,0,0) +
      OPS_ACC(wk7_B0, 0,0,0))*OPS_ACC(wk7_B0, 0,0,0) + 1.0*rcinv11*(OPS_ACC(wk15_B0, 0,0,0) +
      OPS_ACC(wk22_B0, 0,0,0))*OPS_ACC(wk15_B0, 0,0,0) + 1.0*rcinv11*(OPS_ACC(wk15_B0, 0,0,0) +
      OPS_ACC(wk22_B0, 0,0,0))*OPS_ACC(wk22_B0, 0,0,0) + 1.0*rcinv11*(OPS_ACC(wk5_B0, 0,0,0) +
      OPS_ACC(wk6_B0, 0,0,0))*OPS_ACC(wk5_B0, 0,0,0) + 1.0*rcinv11*(OPS_ACC(wk5_B0, 0,0,0) +
      OPS_ACC(wk6_B0, 0,0,0))*OPS_ACC(wk6_B0, 0,0,0) + 1.0*rcinv11*(-rc8*OPS_ACC(wk13_B0, 0,0,0) -
      rc8*OPS_ACC(wk26_B0, 0,0,0) + (rc9)*OPS_ACC(wk2_B0, 0,0,0))*OPS_ACC(wk2_B0, 0,0,0) +
      1.0*rcinv11*(-rc8*OPS_ACC(wk13_B0, 0,0,0) + (rc9)*OPS_ACC(wk26_B0, 0,0,0) -
      rc8*OPS_ACC(wk2_B0, 0,0,0))*OPS_ACC(wk26_B0, 0,0,0) + 1.0*rcinv11*((rc9)*OPS_ACC(wk13_B0, 0,0,0) -
      rc8*OPS_ACC(wk26_B0, 0,0,0) - rc8*OPS_ACC(wk2_B0, 0,0,0))*OPS_ACC(wk13_B0, 0,0,0) +
      1.0*rcinv11*(OPS_ACC(wk0_B0, 0,0,0) + (rc9)*OPS_ACC(wk20_B0, 0,0,0) + (rc12)*OPS_ACC(wk21_B0, 0,0,0) +
      OPS_ACC(wk4_B0, 0,0,0) + (rc12)*OPS_ACC(wk9_B0, 0,0,0))*OPS_ACC(u1_B0, 0,0,0) +
      1.0*rcinv11*(OPS_ACC(wk11_B0, 0,0,0) + (rc9)*OPS_ACC(wk14_B0, 0,0,0) + (rc12)*OPS_ACC(wk16_B0, 0,0,0) +
      OPS_ACC(wk18_B0, 0,0,0) + (rc12)*OPS_ACC(wk23_B0, 0,0,0))*OPS_ACC(u2_B0, 0,0,0) +
      1.0*rcinv11*((rc9)*OPS_ACC(wk17_B0, 0,0,0) + (rc12)*OPS_ACC(wk24_B0, 0,0,0) + OPS_ACC(wk25_B0, 0,0,0) +
      (rc12)*OPS_ACC(wk3_B0, 0,0,0) + OPS_ACC(wk8_B0, 0,0,0))*OPS_ACC(u0_B0, 0,0,0) +
      OPS_ACC(Residual4_B0, 0,0,0);


      }
    }
  }
}
