//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel031;
int ydim0_opensbliblock00Kernel031;
int xdim1_opensbliblock00Kernel031;
int ydim1_opensbliblock00Kernel031;


//user function



void opensbliblock00Kernel031_c_wrapper(
  double * restrict p_B0_p,
  double * restrict wk20_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double p_B0 = { p_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel031*1 + n_z * xdim0_opensbliblock00Kernel031 * ydim0_opensbliblock00Kernel031*1, xdim0_opensbliblock00Kernel031, ydim0_opensbliblock00Kernel031};
        ptr_double wk20_B0 = { wk20_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel031*1 + n_z * xdim1_opensbliblock00Kernel031 * ydim1_opensbliblock00Kernel031*1, xdim1_opensbliblock00Kernel031, ydim1_opensbliblock00Kernel031};
        
    OPS_ACC(wk20_B0, 0,0,0) = inv_1*(-rc7*OPS_ACC(p_B0, 0,2,0) - rc8*OPS_ACC(p_B0, 0,-1,0) +
      (rc8)*OPS_ACC(p_B0, 0,1,0) + (rc7)*OPS_ACC(p_B0, 0,-2,0));


      }
    }
  }
}
