//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel058;
int ydim0_opensbliblock00Kernel058;
int xdim1_opensbliblock00Kernel058;
int ydim1_opensbliblock00Kernel058;


//user function



void opensbliblock00Kernel058_c_wrapper(
  double * restrict u0_B0_p,
  double * restrict wk5_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel058*1 + n_z * xdim0_opensbliblock00Kernel058 * ydim0_opensbliblock00Kernel058*1, xdim0_opensbliblock00Kernel058, ydim0_opensbliblock00Kernel058};
        ptr_double wk5_B0 = { wk5_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel058*1 + n_z * xdim1_opensbliblock00Kernel058 * ydim1_opensbliblock00Kernel058*1, xdim1_opensbliblock00Kernel058, ydim1_opensbliblock00Kernel058};
        
    OPS_ACC(wk5_B0, 0,0,0) = inv_2*(-rc29*OPS_ACC(u0_B0, 0,0,2) + (rc32)*OPS_ACC(u0_B0, 0,0,5) +
      (rc31)*OPS_ACC(u0_B0, 0,0,-4) + (rc33)*OPS_ACC(u0_B0, 0,0,1) - rc31*OPS_ACC(u0_B0, 0,0,4) -
      rc32*OPS_ACC(u0_B0, 0,0,-5) - rc33*OPS_ACC(u0_B0, 0,0,-1) + (rc30)*OPS_ACC(u0_B0, 0,0,3) -
      rc30*OPS_ACC(u0_B0, 0,0,-3) + (rc29)*OPS_ACC(u0_B0, 0,0,-2));


      }
    }
  }
}
