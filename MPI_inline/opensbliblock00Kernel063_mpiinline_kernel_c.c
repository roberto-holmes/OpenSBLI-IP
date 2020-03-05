//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel063;
int ydim0_opensbliblock00Kernel063;
int xdim1_opensbliblock00Kernel063;
int ydim1_opensbliblock00Kernel063;


//user function



void opensbliblock00Kernel063_c_wrapper(
  double * restrict u2_B0_p,
  double * restrict wk10_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u2_B0 = { u2_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel063*1 + n_z * xdim0_opensbliblock00Kernel063 * ydim0_opensbliblock00Kernel063*1, xdim0_opensbliblock00Kernel063, ydim0_opensbliblock00Kernel063};
        ptr_double wk10_B0 = { wk10_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel063*1 + n_z * xdim1_opensbliblock00Kernel063 * ydim1_opensbliblock00Kernel063*1, xdim1_opensbliblock00Kernel063, ydim1_opensbliblock00Kernel063};
        
    OPS_ACC(wk10_B0, 0,0,0) = inv_1*((rc8)*OPS_ACC(u2_B0, 0,1,0) + (rc7)*OPS_ACC(u2_B0, 0,-2,0) -
      rc8*OPS_ACC(u2_B0, 0,-1,0) - rc7*OPS_ACC(u2_B0, 0,2,0));


      }
    }
  }
}