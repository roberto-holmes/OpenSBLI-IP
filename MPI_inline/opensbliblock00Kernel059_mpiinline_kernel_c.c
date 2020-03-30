//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel059;
int ydim0_opensbliblock00Kernel059;
int xdim1_opensbliblock00Kernel059;
int ydim1_opensbliblock00Kernel059;


//user function



void opensbliblock00Kernel059_c_wrapper(
  double * restrict u2_B0_p,
  double * restrict wk6_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u2_B0 = { u2_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel059*1 + n_z * xdim0_opensbliblock00Kernel059 * ydim0_opensbliblock00Kernel059*1, xdim0_opensbliblock00Kernel059, ydim0_opensbliblock00Kernel059};
        ptr_double wk6_B0 = { wk6_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel059*1 + n_z * xdim1_opensbliblock00Kernel059 * ydim1_opensbliblock00Kernel059*1, xdim1_opensbliblock00Kernel059, ydim1_opensbliblock00Kernel059};
        
    OPS_ACC(wk6_B0, 0,0,0) = inv_0*((rc33)*OPS_ACC(u2_B0, 1,0,0) - rc32*OPS_ACC(u2_B0, -5,0,0) +
      (rc29)*OPS_ACC(u2_B0, -2,0,0) + (rc30)*OPS_ACC(u2_B0, 3,0,0) - rc30*OPS_ACC(u2_B0, -3,0,0) -
      rc29*OPS_ACC(u2_B0, 2,0,0) + (rc31)*OPS_ACC(u2_B0, -4,0,0) + (rc32)*OPS_ACC(u2_B0, 5,0,0) -
      rc31*OPS_ACC(u2_B0, 4,0,0) - rc33*OPS_ACC(u2_B0, -1,0,0));


      }
    }
  }
}
