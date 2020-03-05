//
// auto-generated by ops.py
//
__constant__ int dims_opensbliblock00Kernel046 [2][2];
static int dims_opensbliblock00Kernel046_h [2][2] = {0};

//user function
__device__

void opensbliblock00Kernel046_gpu(const ACC<double> &wk41_B0,
  ACC<double> &wk33_B0)
{
    wk33_B0(0,0,0) = inv_2*((rc21)*wk41_B0(0,0,-2) + (rc22)*wk41_B0(0,0,3) -
      rc24*wk41_B0(0,0,-1) - rc22*wk41_B0(0,0,-3) - rc21*wk41_B0(0,0,2) +
      (rc23)*wk41_B0(0,0,-4) + (rc24)*wk41_B0(0,0,1) - rc23*wk41_B0(0,0,4));

}



__global__ void ops_opensbliblock00Kernel046(
double* __restrict arg0,
double* __restrict arg1,
int size0,
int size1,
int size2 ){


  int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
  int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
  int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

  arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel046[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel046[0][0] * dims_opensbliblock00Kernel046[0][1];
  arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel046[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel046[1][0] * dims_opensbliblock00Kernel046[1][1];

  if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
    const ACC<double> argp0(dims_opensbliblock00Kernel046[0][0], dims_opensbliblock00Kernel046[0][1], arg0);
    ACC<double> argp1(dims_opensbliblock00Kernel046[1][0], dims_opensbliblock00Kernel046[1][1], arg1);
    opensbliblock00Kernel046_gpu(argp0, argp1);
  }

}

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel046(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1) {
#else
void ops_par_loop_opensbliblock00Kernel046_execute(ops_kernel_descriptor *desc) {
  int dim = desc->dim;
  #if OPS_MPI
  ops_block block = desc->block;
  #endif
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  #endif

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[2] = { arg0, arg1};


  #if CHECKPOINTING && !OPS_LAZY
  if (!ops_checkpointing_before(args,2,range,50)) return;
  #endif

  if (OPS_diags > 1) {
    ops_timing_realloc(50,"opensbliblock00Kernel046");
    OPS_kernels[50].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[3];
  int end[3];
  #if OPS_MPI && !OPS_LAZY
  sub_block_list sb = OPS_sub_block_list[block->index];
  #endif //OPS_MPI

  #ifdef OPS_MPI
  int arg_idx[3];
  #endif
  #ifdef OPS_MPI
  if (compute_ranges(args, 2,block, range, start, end, arg_idx) < 0) return;
  #else //OPS_MPI
  for ( int n=0; n<3; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #endif
  int xdim0 = args[0].dat->size[0];
  int ydim0 = args[0].dat->size[1];
  int xdim1 = args[1].dat->size[0];
  int ydim1 = args[1].dat->size[1];

  if (xdim0 != dims_opensbliblock00Kernel046_h[0][0] || ydim0 != dims_opensbliblock00Kernel046_h[0][1] || xdim1 != dims_opensbliblock00Kernel046_h[1][0] || ydim1 != dims_opensbliblock00Kernel046_h[1][1]) {
    dims_opensbliblock00Kernel046_h[0][0] = xdim0;
    dims_opensbliblock00Kernel046_h[0][1] = ydim0;
    dims_opensbliblock00Kernel046_h[1][0] = xdim1;
    dims_opensbliblock00Kernel046_h[1][1] = ydim1;
    cutilSafeCall(cudaMemcpyToSymbol( dims_opensbliblock00Kernel046, dims_opensbliblock00Kernel046_h, sizeof(dims_opensbliblock00Kernel046)));
  }



  int x_size = MAX(0,end[0]-start[0]);
  int y_size = MAX(0,end[1]-start[1]);
  int z_size = MAX(0,end[2]-start[2]);

  dim3 grid( (x_size-1)/OPS_block_size_x+ 1, (y_size-1)/OPS_block_size_y + 1, (z_size-1)/OPS_block_size_z +1);
  dim3 tblock(OPS_block_size_x,OPS_block_size_y,OPS_block_size_z);



  int dat0 = (OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
  int dat1 = (OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);

  char *p_a[2];

  //set up initial pointers
  int base0 = args[0].dat->base_offset + 
           dat0 * 1 * (start[0] * args[0].stencil->stride[0]);
  base0 = base0+ dat0 *
    args[0].dat->size[0] *
    (start[1] * args[0].stencil->stride[1]);
  base0 = base0+ dat0 *
    args[0].dat->size[0] *
    args[0].dat->size[1] *
    (start[2] * args[0].stencil->stride[2]);
  p_a[0] = (char *)args[0].data_d + base0;

  int base1 = args[1].dat->base_offset + 
           dat1 * 1 * (start[0] * args[1].stencil->stride[0]);
  base1 = base1+ dat1 *
    args[1].dat->size[0] *
    (start[1] * args[1].stencil->stride[1]);
  base1 = base1+ dat1 *
    args[1].dat->size[0] *
    args[1].dat->size[1] *
    (start[2] * args[1].stencil->stride[2]);
  p_a[1] = (char *)args[1].data_d + base1;


  #ifndef OPS_LAZY
  ops_H_D_exchanges_device(args, 2);
  ops_halo_exchanges(args,2,range);
  #endif

  if (OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    OPS_kernels[50].mpi_time += t2-t1;
  }


  //call kernel wrapper function, passing in pointers to data
  if (x_size > 0 && y_size > 0 && z_size > 0)
    ops_opensbliblock00Kernel046<<<grid, tblock >>> (  (double *)p_a[0], (double *)p_a[1],x_size, y_size, z_size);

  cutilSafeCall(cudaGetLastError());

  if (OPS_diags>1) {
    cutilSafeCall(cudaDeviceSynchronize());
    ops_timers_core(&c1,&t1);
    OPS_kernels[50].time += t1-t2;
  }

  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 2);
  ops_set_halo_dirtybit3(&args[1],range);
  #endif

  if (OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    OPS_kernels[50].mpi_time += t2-t1;
    OPS_kernels[50].transfer += ops_compute_transfer(dim, start, end, &arg0);
    OPS_kernels[50].transfer += ops_compute_transfer(dim, start, end, &arg1);
  }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel046(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)malloc(sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 1;
  desc->index = 50;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 50;
  for ( int i=0; i<6; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 2;
  desc->args = (ops_arg*)malloc(2*sizeof(ops_arg));
  desc->args[0] = arg0;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg0.dat->index;
  desc->args[1] = arg1;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg1.dat->index;
  desc->function = ops_par_loop_opensbliblock00Kernel046_execute;
  if (OPS_diags > 1) {
    ops_timing_realloc(50,"opensbliblock00Kernel046");
  }
  ops_enqueue_kernel(desc);
}
#endif
