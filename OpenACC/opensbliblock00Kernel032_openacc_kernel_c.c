//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel032;
int ydim0_opensbliblock00Kernel032;
int xdim1_opensbliblock00Kernel032;
int ydim1_opensbliblock00Kernel032;

//user function
inline 
void opensbliblock00Kernel032(const ptr_double rhou1_B0,
  ptr_double wk21_B0)
{
    OPS_ACC(wk21_B0, 0,0,0) = inv_1*((rc23)*OPS_ACC(rhou1_B0, 0,-4,0) - rc22*OPS_ACC(rhou1_B0, 0,-3,0) +
      (rc24)*OPS_ACC(rhou1_B0, 0,1,0) + (rc21)*OPS_ACC(rhou1_B0, 0,-2,0) - rc21*OPS_ACC(rhou1_B0, 0,2,0) -
      rc24*OPS_ACC(rhou1_B0, 0,-1,0) + (rc22)*OPS_ACC(rhou1_B0, 0,3,0) - rc23*OPS_ACC(rhou1_B0, 0,4,0));

}


void opensbliblock00Kernel032_c_wrapper(
  double *p_a0,
  double *p_a1,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1)
  #pragma acc loop
  #endif
  for ( int n_z=0; n_z<z_size; n_z++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_y=0; n_y<y_size; n_y++ ){
      #ifdef OPS_GPU
      #pragma acc loop
      #endif
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel032*1*1 + n_z*xdim0_opensbliblock00Kernel032*ydim0_opensbliblock00Kernel032*1*1, xdim0_opensbliblock00Kernel032, ydim0_opensbliblock00Kernel032};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel032*1*1 + n_z*xdim1_opensbliblock00Kernel032*ydim1_opensbliblock00Kernel032*1*1, xdim1_opensbliblock00Kernel032, ydim1_opensbliblock00Kernel032};
        opensbliblock00Kernel032( ptr0,
          ptr1 );

      }
    }
  }
}
