//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel024;
int ydim0_opensbliblock00Kernel024;
int xdim1_opensbliblock00Kernel024;
int ydim1_opensbliblock00Kernel024;

//user function
inline 
void opensbliblock00Kernel024(const ptr_double u1_B0,
  ptr_double wk13_B0)
{
    OPS_ACC(wk13_B0, 0,0,0) = inv_1*(-rc8*OPS_ACC(u1_B0, 0,-1,0) + (rc7)*OPS_ACC(u1_B0, 0,-2,0) +
      (rc8)*OPS_ACC(u1_B0, 0,1,0) - rc7*OPS_ACC(u1_B0, 0,2,0));

}


void opensbliblock00Kernel024_c_wrapper(
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
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel024*1*1 + n_z*xdim0_opensbliblock00Kernel024*ydim0_opensbliblock00Kernel024*1*1, xdim0_opensbliblock00Kernel024, ydim0_opensbliblock00Kernel024};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel024*1*1 + n_z*xdim1_opensbliblock00Kernel024*ydim1_opensbliblock00Kernel024*1*1, xdim1_opensbliblock00Kernel024, ydim1_opensbliblock00Kernel024};
        opensbliblock00Kernel024( ptr0,
          ptr1 );

      }
    }
  }
}
