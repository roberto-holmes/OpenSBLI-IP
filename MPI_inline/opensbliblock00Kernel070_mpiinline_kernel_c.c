//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel070;
int ydim0_opensbliblock00Kernel070;
int xdim1_opensbliblock00Kernel070;
int ydim1_opensbliblock00Kernel070;


//user function



void opensbliblock00Kernel070_c_wrapper(
  double * restrict u0_B0_p,
  double * restrict wk17_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel070*1 + n_z * xdim0_opensbliblock00Kernel070 * ydim0_opensbliblock00Kernel070*1, xdim0_opensbliblock00Kernel070, ydim0_opensbliblock00Kernel070};
        ptr_double wk17_B0 = { wk17_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel070*1 + n_z * xdim1_opensbliblock00Kernel070 * ydim1_opensbliblock00Kernel070*1, xdim1_opensbliblock00Kernel070, ydim1_opensbliblock00Kernel070};
        
    OPS_ACC(wk17_B0, 0,0,0) = inv_3*((rc36)*OPS_ACC(u0_B0, 3,0,0) - rc29*OPS_ACC(u0_B0, 2,0,0) -
      rc29*OPS_ACC(u0_B0, -2,0,0) + (rc34)*OPS_ACC(u0_B0, 1,0,0) + (rc34)*OPS_ACC(u0_B0, -1,0,0) +
      (rc36)*OPS_ACC(u0_B0, -3,0,0) - rc35*OPS_ACC(u0_B0, 0,0,0) - rc38*OPS_ACC(u0_B0, -4,0,0) +
      (rc37)*OPS_ACC(u0_B0, 5,0,0) + (rc37)*OPS_ACC(u0_B0, -5,0,0) - rc38*OPS_ACC(u0_B0, 4,0,0));


      }
    }
  }
}
