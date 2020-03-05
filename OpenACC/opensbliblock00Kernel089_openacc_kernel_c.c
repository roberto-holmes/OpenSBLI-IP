//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel089;
int ydim0_opensbliblock00Kernel089;
int xdim1_opensbliblock00Kernel089;
int ydim1_opensbliblock00Kernel089;
int xdim2_opensbliblock00Kernel089;
int ydim2_opensbliblock00Kernel089;
int xdim3_opensbliblock00Kernel089;
int ydim3_opensbliblock00Kernel089;
int xdim4_opensbliblock00Kernel089;
int ydim4_opensbliblock00Kernel089;
int xdim5_opensbliblock00Kernel089;
int ydim5_opensbliblock00Kernel089;
int xdim6_opensbliblock00Kernel089;
int ydim6_opensbliblock00Kernel089;
int xdim7_opensbliblock00Kernel089;
int ydim7_opensbliblock00Kernel089;
int xdim8_opensbliblock00Kernel089;
int ydim8_opensbliblock00Kernel089;
int xdim9_opensbliblock00Kernel089;
int ydim9_opensbliblock00Kernel089;

//user function
inline 
 void opensbliblock00Kernel089(const ptr_double rhou1_B0,
  const ptr_double rhoE_B0,
  const ptr_double rhou0_B0,
  const ptr_double rho_B0,
  const ptr_double rhou2_B0,
  ptr_double rhou1_old_B0,
  ptr_double rhou2_old_B0,
  ptr_double rhou0_old_B0,
  ptr_double rho_old_B0,
  ptr_double rhoE_old_B0)
{
   OPS_ACC(rho_old_B0, 0,0,0) = OPS_ACC(rho_B0, 0,0,0);

   OPS_ACC(rhou0_old_B0, 0,0,0) = OPS_ACC(rhou0_B0, 0,0,0);

   OPS_ACC(rhou1_old_B0, 0,0,0) = OPS_ACC(rhou1_B0, 0,0,0);

   OPS_ACC(rhou2_old_B0, 0,0,0) = OPS_ACC(rhou2_B0, 0,0,0);

   OPS_ACC(rhoE_old_B0, 0,0,0) = OPS_ACC(rhoE_B0, 0,0,0);

}


void opensbliblock00Kernel089_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  double *p_a8,
  double *p_a9,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9)
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
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel089*1*1 + n_z*xdim0_opensbliblock00Kernel089*ydim0_opensbliblock00Kernel089*1*1, xdim0_opensbliblock00Kernel089, ydim0_opensbliblock00Kernel089};
        const ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel089*1*1 + n_z*xdim1_opensbliblock00Kernel089*ydim1_opensbliblock00Kernel089*1*1, xdim1_opensbliblock00Kernel089, ydim1_opensbliblock00Kernel089};
        const ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel089*1*1 + n_z*xdim2_opensbliblock00Kernel089*ydim2_opensbliblock00Kernel089*1*1, xdim2_opensbliblock00Kernel089, ydim2_opensbliblock00Kernel089};
        const ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel089*1*1 + n_z*xdim3_opensbliblock00Kernel089*ydim3_opensbliblock00Kernel089*1*1, xdim3_opensbliblock00Kernel089, ydim3_opensbliblock00Kernel089};
        const ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel089*1*1 + n_z*xdim4_opensbliblock00Kernel089*ydim4_opensbliblock00Kernel089*1*1, xdim4_opensbliblock00Kernel089, ydim4_opensbliblock00Kernel089};
        ptr_double ptr5 = {  p_a5 + n_x*1*1 + n_y*xdim5_opensbliblock00Kernel089*1*1 + n_z*xdim5_opensbliblock00Kernel089*ydim5_opensbliblock00Kernel089*1*1, xdim5_opensbliblock00Kernel089, ydim5_opensbliblock00Kernel089};
        ptr_double ptr6 = {  p_a6 + n_x*1*1 + n_y*xdim6_opensbliblock00Kernel089*1*1 + n_z*xdim6_opensbliblock00Kernel089*ydim6_opensbliblock00Kernel089*1*1, xdim6_opensbliblock00Kernel089, ydim6_opensbliblock00Kernel089};
        ptr_double ptr7 = {  p_a7 + n_x*1*1 + n_y*xdim7_opensbliblock00Kernel089*1*1 + n_z*xdim7_opensbliblock00Kernel089*ydim7_opensbliblock00Kernel089*1*1, xdim7_opensbliblock00Kernel089, ydim7_opensbliblock00Kernel089};
        ptr_double ptr8 = {  p_a8 + n_x*1*1 + n_y*xdim8_opensbliblock00Kernel089*1*1 + n_z*xdim8_opensbliblock00Kernel089*ydim8_opensbliblock00Kernel089*1*1, xdim8_opensbliblock00Kernel089, ydim8_opensbliblock00Kernel089};
        ptr_double ptr9 = {  p_a9 + n_x*1*1 + n_y*xdim9_opensbliblock00Kernel089*1*1 + n_z*xdim9_opensbliblock00Kernel089*ydim9_opensbliblock00Kernel089*1*1, xdim9_opensbliblock00Kernel089, ydim9_opensbliblock00Kernel089};
        opensbliblock00Kernel089( ptr0,
          ptr1,
          ptr2,
          ptr3,
          ptr4,
          ptr5,
          ptr6,
          ptr7,
          ptr8,
          ptr9 );

      }
    }
  }
}
