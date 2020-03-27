//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel030;
int ydim0_opensbliblock00Kernel030;
int xdim1_opensbliblock00Kernel030;
int ydim1_opensbliblock00Kernel030;


//user function



void opensbliblock00Kernel030_c_wrapper(
  double * restrict wk42_B0_p,
  double * restrict wk19_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double wk42_B0 = { wk42_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel030*1 + n_z * xdim0_opensbliblock00Kernel030 * ydim0_opensbliblock00Kernel030*1, xdim0_opensbliblock00Kernel030, ydim0_opensbliblock00Kernel030};
        ptr_double wk19_B0 = { wk19_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel030*1 + n_z * xdim1_opensbliblock00Kernel030 * ydim1_opensbliblock00Kernel030*1, xdim1_opensbliblock00Kernel030, ydim1_opensbliblock00Kernel030};
        
    OPS_ACC(wk19_B0, 0,0,0) = inv_1*(-rc12*OPS_ACC(wk42_B0, 0,-1,0) + (rc13)*OPS_ACC(wk42_B0, 0,-2,0) +
      (rc12)*OPS_ACC(wk42_B0, 0,1,0) - rc13*OPS_ACC(wk42_B0, 0,2,0));


      }
    }
  }
}
