//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel090(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10) {
#else
void ops_par_loop_opensbliblock00Kernel090_execute(ops_kernel_descriptor *desc) {
  ops_block block = desc->block;
  int dim = desc->dim;
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  ops_arg arg5 = desc->args[5];
  ops_arg arg6 = desc->args[6];
  ops_arg arg7 = desc->args[7];
  ops_arg arg8 = desc->args[8];
  ops_arg arg9 = desc->args[9];
  ops_arg arg10 = desc->args[10];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[11] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,11,range,86)) return;
  #endif

  if (OPS_diags > 1) {
    ops_timing_realloc(86,"opensbliblock00Kernel090");
    OPS_kernels[86].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(args, "opensbliblock00Kernel090");
  #endif


  //compute locally allocated range for the sub-block
  int start[3];
  int end[3];
  #ifdef OPS_MPI
  int arg_idx[3];
  #endif
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<3; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 11,block, range, start, end, arg_idx) < 0) return;
  #endif


  //initialize global variable with the dimension of dats
  int xdim0_opensbliblock00Kernel090 = args[0].dat->size[0];
  int ydim0_opensbliblock00Kernel090 = args[0].dat->size[1];
  int xdim1_opensbliblock00Kernel090 = args[1].dat->size[0];
  int ydim1_opensbliblock00Kernel090 = args[1].dat->size[1];
  int xdim2_opensbliblock00Kernel090 = args[2].dat->size[0];
  int ydim2_opensbliblock00Kernel090 = args[2].dat->size[1];
  int xdim3_opensbliblock00Kernel090 = args[3].dat->size[0];
  int ydim3_opensbliblock00Kernel090 = args[3].dat->size[1];
  int xdim4_opensbliblock00Kernel090 = args[4].dat->size[0];
  int ydim4_opensbliblock00Kernel090 = args[4].dat->size[1];
  int xdim5_opensbliblock00Kernel090 = args[5].dat->size[0];
  int ydim5_opensbliblock00Kernel090 = args[5].dat->size[1];
  int xdim6_opensbliblock00Kernel090 = args[6].dat->size[0];
  int ydim6_opensbliblock00Kernel090 = args[6].dat->size[1];
  int xdim7_opensbliblock00Kernel090 = args[7].dat->size[0];
  int ydim7_opensbliblock00Kernel090 = args[7].dat->size[1];
  int xdim8_opensbliblock00Kernel090 = args[8].dat->size[0];
  int ydim8_opensbliblock00Kernel090 = args[8].dat->size[1];
  int xdim9_opensbliblock00Kernel090 = args[9].dat->size[0];
  int ydim9_opensbliblock00Kernel090 = args[9].dat->size[1];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ Residual4_B0_p = (double *)(args[0].data + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ Residual3_B0_p = (double *)(args[1].data + base1);

  int base2 = args[2].dat->base_offset;
  double * __restrict__ Residual0_B0_p = (double *)(args[2].data + base2);

  int base3 = args[3].dat->base_offset;
  double * __restrict__ Residual2_B0_p = (double *)(args[3].data + base3);

  int base4 = args[4].dat->base_offset;
  double * __restrict__ Residual1_B0_p = (double *)(args[4].data + base4);

  int base5 = args[5].dat->base_offset;
  double * __restrict__ rhou1_old_B0_p = (double *)(args[5].data + base5);

  int base6 = args[6].dat->base_offset;
  double * __restrict__ rhou2_old_B0_p = (double *)(args[6].data + base6);

  int base7 = args[7].dat->base_offset;
  double * __restrict__ rhou0_old_B0_p = (double *)(args[7].data + base7);

  int base8 = args[8].dat->base_offset;
  double * __restrict__ rho_old_B0_p = (double *)(args[8].data + base8);

  int base9 = args[9].dat->base_offset;
  double * __restrict__ rhoE_old_B0_p = (double *)(args[9].data + base9);

  double * __restrict__ rkold = (double *)args[10].data;




  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_host(args, 11);
  ops_halo_exchanges(args,11,range);
  ops_H_D_exchanges_host(args, 11);
  #endif

  if (OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    OPS_kernels[86].mpi_time += __t1-__t2;
  }

  #pragma omp parallel for collapse(2)
  for ( int n_z=start[2]; n_z<end[2]; n_z++ ){
    for ( int n_y=start[1]; n_y<end[1]; n_y++ ){
      #ifdef __INTEL_COMPILER
      #pragma loop_count(10000)
      #pragma omp simd
      #elif defined(__clang__)
      #pragma clang loop vectorize(assume_safety)
      #elif defined(__GNUC__)
      #pragma simd
      #pragma GCC ivdep
      #else
      #pragma simd
      #endif
      for ( int n_x=start[0]; n_x<end[0]; n_x++ ){
        const ACC<double> Residual4_B0(xdim0_opensbliblock00Kernel090, ydim0_opensbliblock00Kernel090, Residual4_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel090*1 + n_z * xdim0_opensbliblock00Kernel090 * ydim0_opensbliblock00Kernel090*1);
        const ACC<double> Residual3_B0(xdim1_opensbliblock00Kernel090, ydim1_opensbliblock00Kernel090, Residual3_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel090*1 + n_z * xdim1_opensbliblock00Kernel090 * ydim1_opensbliblock00Kernel090*1);
        const ACC<double> Residual0_B0(xdim2_opensbliblock00Kernel090, ydim2_opensbliblock00Kernel090, Residual0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel090*1 + n_z * xdim2_opensbliblock00Kernel090 * ydim2_opensbliblock00Kernel090*1);
        const ACC<double> Residual2_B0(xdim3_opensbliblock00Kernel090, ydim3_opensbliblock00Kernel090, Residual2_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel090*1 + n_z * xdim3_opensbliblock00Kernel090 * ydim3_opensbliblock00Kernel090*1);
        const ACC<double> Residual1_B0(xdim4_opensbliblock00Kernel090, ydim4_opensbliblock00Kernel090, Residual1_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel090*1 + n_z * xdim4_opensbliblock00Kernel090 * ydim4_opensbliblock00Kernel090*1);
        ACC<double> rhou1_old_B0(xdim5_opensbliblock00Kernel090, ydim5_opensbliblock00Kernel090, rhou1_old_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel090*1 + n_z * xdim5_opensbliblock00Kernel090 * ydim5_opensbliblock00Kernel090*1);
        ACC<double> rhou2_old_B0(xdim6_opensbliblock00Kernel090, ydim6_opensbliblock00Kernel090, rhou2_old_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel090*1 + n_z * xdim6_opensbliblock00Kernel090 * ydim6_opensbliblock00Kernel090*1);
        ACC<double> rhou0_old_B0(xdim7_opensbliblock00Kernel090, ydim7_opensbliblock00Kernel090, rhou0_old_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel090*1 + n_z * xdim7_opensbliblock00Kernel090 * ydim7_opensbliblock00Kernel090*1);
        ACC<double> rho_old_B0(xdim8_opensbliblock00Kernel090, ydim8_opensbliblock00Kernel090, rho_old_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel090*1 + n_z * xdim8_opensbliblock00Kernel090 * ydim8_opensbliblock00Kernel090*1);
        ACC<double> rhoE_old_B0(xdim9_opensbliblock00Kernel090, ydim9_opensbliblock00Kernel090, rhoE_old_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel090*1 + n_z * xdim9_opensbliblock00Kernel090 * ydim9_opensbliblock00Kernel090*1);
        
   rho_old_B0(0,0,0) = dt*rkold[0]*Residual0_B0(0,0,0) + rho_old_B0(0,0,0);

   rhou0_old_B0(0,0,0) = dt*rkold[0]*Residual1_B0(0,0,0) + rhou0_old_B0(0,0,0);

   rhou1_old_B0(0,0,0) = dt*rkold[0]*Residual2_B0(0,0,0) + rhou1_old_B0(0,0,0);

   rhou2_old_B0(0,0,0) = dt*rkold[0]*Residual3_B0(0,0,0) + rhou2_old_B0(0,0,0);

   rhoE_old_B0(0,0,0) = dt*rkold[0]*Residual4_B0(0,0,0) + rhoE_old_B0(0,0,0);


      }
    }
  }
  if (OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    OPS_kernels[86].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_host(args, 11);
  ops_set_halo_dirtybit3(&args[5],range);
  ops_set_halo_dirtybit3(&args[6],range);
  ops_set_halo_dirtybit3(&args[7],range);
  ops_set_halo_dirtybit3(&args[8],range);
  ops_set_halo_dirtybit3(&args[9],range);
  #endif

  if (OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    OPS_kernels[86].mpi_time += __t1-__t2;
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg0);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg1);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg2);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg3);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg4);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg5);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg6);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg7);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg8);
    OPS_kernels[86].transfer += ops_compute_transfer(dim, start, end, &arg9);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel090(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)malloc(sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 1;
  desc->index = 86;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 86;
  for ( int i=0; i<6; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 11;
  desc->args = (ops_arg*)malloc(11*sizeof(ops_arg));
  desc->args[0] = arg0;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg0.dat->index;
  desc->args[1] = arg1;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg1.dat->index;
  desc->args[2] = arg2;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg2.dat->index;
  desc->args[3] = arg3;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg3.dat->index;
  desc->args[4] = arg4;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg4.dat->index;
  desc->args[5] = arg5;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg5.dat->index;
  desc->args[6] = arg6;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg6.dat->index;
  desc->args[7] = arg7;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg7.dat->index;
  desc->args[8] = arg8;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg8.dat->index;
  desc->args[9] = arg9;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg9.dat->index;
  desc->args[10] = arg10;
  char *tmp = (char*)malloc(1*sizeof(double));
  memcpy(tmp, arg10.data,1*sizeof(double));
  desc->args[10].data = tmp;
  desc->function = ops_par_loop_opensbliblock00Kernel090_execute;
  if (OPS_diags > 1) {
    ops_timing_realloc(86,"opensbliblock00Kernel090");
  }
  ops_enqueue_kernel(desc);
}
#endif