//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel036;
int ydim0_opensbliblock00Kernel036;
int xdim1_opensbliblock00Kernel036;
int ydim1_opensbliblock00Kernel036;


//user function



void opensbliblock00Kernel036_c_wrapper(
  double * restrict wk44_B0_p,
  double * restrict wk25_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double wk44_B0 = { wk44_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel036*1 + n_z * xdim0_opensbliblock00Kernel036 * ydim0_opensbliblock00Kernel036*1, xdim0_opensbliblock00Kernel036, ydim0_opensbliblock00Kernel036};
        ptr_double wk25_B0 = { wk25_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel036*1 + n_z * xdim1_opensbliblock00Kernel036 * ydim1_opensbliblock00Kernel036*1, xdim1_opensbliblock00Kernel036, ydim1_opensbliblock00Kernel036};
        
    OPS_ACC(wk25_B0, 0,0,0) = inv_1*((rc31)*OPS_ACC(wk44_B0, 0,-4,0) + (rc33)*OPS_ACC(wk44_B0, 0,1,0) -
      rc32*OPS_ACC(wk44_B0, 0,-5,0) - rc30*OPS_ACC(wk44_B0, 0,-3,0) - rc29*OPS_ACC(wk44_B0, 0,2,0) -
      rc31*OPS_ACC(wk44_B0, 0,4,0) - rc33*OPS_ACC(wk44_B0, 0,-1,0) + (rc30)*OPS_ACC(wk44_B0, 0,3,0) +
      (rc32)*OPS_ACC(wk44_B0, 0,5,0) + (rc29)*OPS_ACC(wk44_B0, 0,-2,0));


      }
    }
  }
}
