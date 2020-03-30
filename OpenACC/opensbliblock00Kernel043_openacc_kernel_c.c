//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel043;
int ydim0_opensbliblock00Kernel043;
int xdim1_opensbliblock00Kernel043;
int ydim1_opensbliblock00Kernel043;

//user function
inline 
void opensbliblock00Kernel043(const ptr_double rhoE_B0,
  ptr_double wk30_B0)
{
    OPS_ACC(wk30_B0, 0,0,0) = inv_2*(-rc32*OPS_ACC(rhoE_B0, 0,0,-5) + (rc31)*OPS_ACC(rhoE_B0, 0,0,-4) +
      (rc32)*OPS_ACC(rhoE_B0, 0,0,5) + (rc33)*OPS_ACC(rhoE_B0, 0,0,1) + (rc29)*OPS_ACC(rhoE_B0, 0,0,-2) -
      rc30*OPS_ACC(rhoE_B0, 0,0,-3) - rc29*OPS_ACC(rhoE_B0, 0,0,2) - rc33*OPS_ACC(rhoE_B0, 0,0,-1) +
      (rc30)*OPS_ACC(rhoE_B0, 0,0,3) - rc31*OPS_ACC(rhoE_B0, 0,0,4));

}


void opensbliblock00Kernel043_c_wrapper(
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
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel043*1*1 + n_z*xdim0_opensbliblock00Kernel043*ydim0_opensbliblock00Kernel043*1*1, xdim0_opensbliblock00Kernel043, ydim0_opensbliblock00Kernel043};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel043*1*1 + n_z*xdim1_opensbliblock00Kernel043*ydim1_opensbliblock00Kernel043*1*1, xdim1_opensbliblock00Kernel043, ydim1_opensbliblock00Kernel043};
        opensbliblock00Kernel043( ptr0,
          ptr1 );

      }
    }
  }
}
