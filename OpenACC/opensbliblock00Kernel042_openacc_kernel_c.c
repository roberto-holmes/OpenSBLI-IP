//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel042;
int ydim0_opensbliblock00Kernel042;
int xdim1_opensbliblock00Kernel042;
int ydim1_opensbliblock00Kernel042;

//user function
inline 
void opensbliblock00Kernel042(const ptr_double wk39_B0,
  ptr_double wk29_B0)
{
    OPS_ACC(wk29_B0, 0,0,0) = inv_2*((rc8)*OPS_ACC(wk39_B0, 0,0,1) - rc7*OPS_ACC(wk39_B0, 0,0,2) +
      (rc7)*OPS_ACC(wk39_B0, 0,0,-2) - rc8*OPS_ACC(wk39_B0, 0,0,-1));

}


void opensbliblock00Kernel042_c_wrapper(
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
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel042*1*1 + n_z*xdim0_opensbliblock00Kernel042*ydim0_opensbliblock00Kernel042*1*1, xdim0_opensbliblock00Kernel042, ydim0_opensbliblock00Kernel042};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel042*1*1 + n_z*xdim1_opensbliblock00Kernel042*ydim1_opensbliblock00Kernel042*1*1, xdim1_opensbliblock00Kernel042, ydim1_opensbliblock00Kernel042};
        opensbliblock00Kernel042( ptr0,
          ptr1 );

      }
    }
  }
}
