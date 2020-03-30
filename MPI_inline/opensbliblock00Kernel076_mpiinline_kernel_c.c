//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel076;
int ydim0_opensbliblock00Kernel076;
int xdim1_opensbliblock00Kernel076;
int ydim1_opensbliblock00Kernel076;


//user function



void opensbliblock00Kernel076_c_wrapper(
  double * restrict wk2_B0_p,
  double * restrict wk23_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double wk2_B0 = { wk2_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel076*1 + n_z * xdim0_opensbliblock00Kernel076 * ydim0_opensbliblock00Kernel076*1, xdim0_opensbliblock00Kernel076, ydim0_opensbliblock00Kernel076};
        ptr_double wk23_B0 = { wk23_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel076*1 + n_z * xdim1_opensbliblock00Kernel076 * ydim1_opensbliblock00Kernel076*1, xdim1_opensbliblock00Kernel076, ydim1_opensbliblock00Kernel076};
        
    OPS_ACC(wk23_B0, 0,0,0) = inv_2*((rc31)*OPS_ACC(wk2_B0, 0,0,-4) - rc32*OPS_ACC(wk2_B0, 0,0,-5) -
      rc29*OPS_ACC(wk2_B0, 0,0,2) + (rc33)*OPS_ACC(wk2_B0, 0,0,1) + (rc32)*OPS_ACC(wk2_B0, 0,0,5) -
      rc33*OPS_ACC(wk2_B0, 0,0,-1) - rc30*OPS_ACC(wk2_B0, 0,0,-3) - rc31*OPS_ACC(wk2_B0, 0,0,4) +
      (rc29)*OPS_ACC(wk2_B0, 0,0,-2) + (rc30)*OPS_ACC(wk2_B0, 0,0,3));


      }
    }
  }
}
