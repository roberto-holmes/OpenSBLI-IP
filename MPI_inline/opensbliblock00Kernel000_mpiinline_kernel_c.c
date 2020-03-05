//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel000;
int ydim0_opensbliblock00Kernel000;
int xdim1_opensbliblock00Kernel000;
int ydim1_opensbliblock00Kernel000;
int xdim2_opensbliblock00Kernel000;
int ydim2_opensbliblock00Kernel000;
int xdim3_opensbliblock00Kernel000;
int ydim3_opensbliblock00Kernel000;
int xdim4_opensbliblock00Kernel000;
int ydim4_opensbliblock00Kernel000;


//user function



void opensbliblock00Kernel000_c_wrapper(
  double * restrict Residual4_B0_p,
  double * restrict Residual3_B0_p,
  double * restrict Residual0_B0_p,
  double * restrict Residual2_B0_p,
  double * restrict Residual1_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        ptr_double Residual4_B0 = { Residual4_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel000*1 + n_z * xdim0_opensbliblock00Kernel000 * ydim0_opensbliblock00Kernel000*1, xdim0_opensbliblock00Kernel000, ydim0_opensbliblock00Kernel000};
        ptr_double Residual3_B0 = { Residual3_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel000*1 + n_z * xdim1_opensbliblock00Kernel000 * ydim1_opensbliblock00Kernel000*1, xdim1_opensbliblock00Kernel000, ydim1_opensbliblock00Kernel000};
        ptr_double Residual0_B0 = { Residual0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel000*1 + n_z * xdim2_opensbliblock00Kernel000 * ydim2_opensbliblock00Kernel000*1, xdim2_opensbliblock00Kernel000, ydim2_opensbliblock00Kernel000};
        ptr_double Residual2_B0 = { Residual2_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel000*1 + n_z * xdim3_opensbliblock00Kernel000 * ydim3_opensbliblock00Kernel000*1, xdim3_opensbliblock00Kernel000, ydim3_opensbliblock00Kernel000};
        ptr_double Residual1_B0 = { Residual1_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel000*1 + n_z * xdim4_opensbliblock00Kernel000 * ydim4_opensbliblock00Kernel000*1, xdim4_opensbliblock00Kernel000, ydim4_opensbliblock00Kernel000};
        
   OPS_ACC(Residual0_B0, 0,0,0) = 0;

   OPS_ACC(Residual1_B0, 0,0,0) = 0;

   OPS_ACC(Residual2_B0, 0,0,0) = 0;

   OPS_ACC(Residual3_B0, 0,0,0) = 0;

   OPS_ACC(Residual4_B0, 0,0,0) = 0;


      }
    }
  }
}
