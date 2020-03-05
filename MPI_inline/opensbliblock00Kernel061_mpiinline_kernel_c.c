//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel061;
int ydim0_opensbliblock00Kernel061;
int xdim1_opensbliblock00Kernel061;
int ydim1_opensbliblock00Kernel061;


//user function



void opensbliblock00Kernel061_c_wrapper(
  double * restrict u0_B0_p,
  double * restrict wk8_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel061*1 + n_z * xdim0_opensbliblock00Kernel061 * ydim0_opensbliblock00Kernel061*1, xdim0_opensbliblock00Kernel061, ydim0_opensbliblock00Kernel061};
        ptr_double wk8_B0 = { wk8_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel061*1 + n_z * xdim1_opensbliblock00Kernel061 * ydim1_opensbliblock00Kernel061*1, xdim1_opensbliblock00Kernel061, ydim1_opensbliblock00Kernel061};
        
    OPS_ACC(wk8_B0, 0,0,0) = inv_4*((rc27)*OPS_ACC(u0_B0, 0,3,0) - rc21*OPS_ACC(u0_B0, 0,2,0) -
      rc21*OPS_ACC(u0_B0, 0,-2,0) + (rc25)*OPS_ACC(u0_B0, 0,1,0) + (rc25)*OPS_ACC(u0_B0, 0,-1,0) +
      (rc27)*OPS_ACC(u0_B0, 0,-3,0) - rc26*OPS_ACC(u0_B0, 0,0,0) - rc28*OPS_ACC(u0_B0, 0,-4,0) -
      rc28*OPS_ACC(u0_B0, 0,4,0));


      }
    }
  }
}
