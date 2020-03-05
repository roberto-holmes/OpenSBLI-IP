//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel044;
int ydim0_opensbliblock00Kernel044;
int xdim1_opensbliblock00Kernel044;
int ydim1_opensbliblock00Kernel044;


//user function



void opensbliblock00Kernel044_c_wrapper(
  double * restrict rhou2_B0_p,
  double * restrict wk31_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double rhou2_B0 = { rhou2_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel044*1 + n_z * xdim0_opensbliblock00Kernel044 * ydim0_opensbliblock00Kernel044*1, xdim0_opensbliblock00Kernel044, ydim0_opensbliblock00Kernel044};
        ptr_double wk31_B0 = { wk31_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel044*1 + n_z * xdim1_opensbliblock00Kernel044 * ydim1_opensbliblock00Kernel044*1, xdim1_opensbliblock00Kernel044, ydim1_opensbliblock00Kernel044};
        
    OPS_ACC(wk31_B0, 0,0,0) = inv_2*(-rc21*OPS_ACC(rhou2_B0, 0,0,2) + (rc23)*OPS_ACC(rhou2_B0, 0,0,-4) +
      (rc24)*OPS_ACC(rhou2_B0, 0,0,1) - rc23*OPS_ACC(rhou2_B0, 0,0,4) + (rc21)*OPS_ACC(rhou2_B0, 0,0,-2) +
      (rc22)*OPS_ACC(rhou2_B0, 0,0,3) - rc22*OPS_ACC(rhou2_B0, 0,0,-3) - rc24*OPS_ACC(rhou2_B0, 0,0,-1));


      }
    }
  }
}
