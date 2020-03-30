//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel004;
int ydim0_opensbliblock00Kernel004;
int xdim1_opensbliblock00Kernel004;
int ydim1_opensbliblock00Kernel004;


//user function



void opensbliblock00Kernel004_c_wrapper(
  double * restrict wk39_B0_p,
  double * restrict wk0_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double wk39_B0 = { wk39_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel004*1 + n_z * xdim0_opensbliblock00Kernel004 * ydim0_opensbliblock00Kernel004*1, xdim0_opensbliblock00Kernel004, ydim0_opensbliblock00Kernel004};
        ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel004*1 + n_z * xdim1_opensbliblock00Kernel004 * ydim1_opensbliblock00Kernel004*1, xdim1_opensbliblock00Kernel004, ydim1_opensbliblock00Kernel004};
        
    OPS_ACC(wk0_B0, 0,0,0) = inv_0*(-rc29*OPS_ACC(wk39_B0, 2,0,0) + (rc30)*OPS_ACC(wk39_B0, 3,0,0) -
      rc31*OPS_ACC(wk39_B0, 4,0,0) - rc32*OPS_ACC(wk39_B0, -5,0,0) + (rc32)*OPS_ACC(wk39_B0, 5,0,0) +
      (rc31)*OPS_ACC(wk39_B0, -4,0,0) + (rc29)*OPS_ACC(wk39_B0, -2,0,0) - rc30*OPS_ACC(wk39_B0, -3,0,0) +
      (rc33)*OPS_ACC(wk39_B0, 1,0,0) - rc33*OPS_ACC(wk39_B0, -1,0,0));


      }
    }
  }
}
