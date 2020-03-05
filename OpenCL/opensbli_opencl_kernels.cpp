//
// auto-generated by ops.py//

//header
#define OPS_API 2
#define OPS_3D
#include "stdlib.h"
#include "stdio.h"
#include "ops_lib_cpp.h"
#include "ops_opencl_rt_support.h"
#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif
//global constants
extern int block0np0;
extern int block0np1;
extern int block0np2;
extern double Delta0block0;
extern double Delta1block0;
extern double Delta2block0;
extern int niter;
extern double dt;
extern double Minf;
extern double gama;
extern double Pr;
extern double Re;
extern double inv_0;
extern double inv_1;
extern double inv_2;
extern double inv_3;
extern double inv_4;
extern double inv_5;
extern double rc6;
extern double rc7;
extern double rc8;
extern double rc9;
extern double rc10;
extern double rcinv11;
extern double rc12;
extern double rcinv13;
extern double rcinv14;

extern ops_opencl_core OPS_opencl_core;

void ops_init_backend() {}

//this needs to be a platform specific copy symbol to device function
void ops_decl_const_char( int dim, char const * type, int typeSize, char * dat, char const * name ) {
  cl_int ret = 0;
  if (OPS_opencl_core.constant == NULL) {
    OPS_opencl_core.constant = (cl_mem*) malloc((27)*sizeof(cl_mem));
    for ( int i=0; i<27; i++ ){
      OPS_opencl_core.constant[i] = NULL;
    }
  }
  if (!strcmp(name,"block0np0")) {
    if (OPS_opencl_core.constant[0] == NULL) {
      OPS_opencl_core.constant[0] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[0], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"block0np1")) {
    if (OPS_opencl_core.constant[1] == NULL) {
      OPS_opencl_core.constant[1] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[1], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"block0np2")) {
    if (OPS_opencl_core.constant[2] == NULL) {
      OPS_opencl_core.constant[2] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[2], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"Delta0block0")) {
    if (OPS_opencl_core.constant[3] == NULL) {
      OPS_opencl_core.constant[3] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[3], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"Delta1block0")) {
    if (OPS_opencl_core.constant[4] == NULL) {
      OPS_opencl_core.constant[4] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[4], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"Delta2block0")) {
    if (OPS_opencl_core.constant[5] == NULL) {
      OPS_opencl_core.constant[5] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[5], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"niter")) {
    if (OPS_opencl_core.constant[6] == NULL) {
      OPS_opencl_core.constant[6] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[6], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"dt")) {
    if (OPS_opencl_core.constant[7] == NULL) {
      OPS_opencl_core.constant[7] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[7], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"Minf")) {
    if (OPS_opencl_core.constant[8] == NULL) {
      OPS_opencl_core.constant[8] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[8], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"gama")) {
    if (OPS_opencl_core.constant[9] == NULL) {
      OPS_opencl_core.constant[9] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[9], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"Pr")) {
    if (OPS_opencl_core.constant[10] == NULL) {
      OPS_opencl_core.constant[10] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[10], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"Re")) {
    if (OPS_opencl_core.constant[11] == NULL) {
      OPS_opencl_core.constant[11] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[11], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"inv_0")) {
    if (OPS_opencl_core.constant[12] == NULL) {
      OPS_opencl_core.constant[12] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[12], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"inv_1")) {
    if (OPS_opencl_core.constant[13] == NULL) {
      OPS_opencl_core.constant[13] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[13], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"inv_2")) {
    if (OPS_opencl_core.constant[14] == NULL) {
      OPS_opencl_core.constant[14] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[14], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"inv_3")) {
    if (OPS_opencl_core.constant[15] == NULL) {
      OPS_opencl_core.constant[15] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[15], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"inv_4")) {
    if (OPS_opencl_core.constant[16] == NULL) {
      OPS_opencl_core.constant[16] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[16], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"inv_5")) {
    if (OPS_opencl_core.constant[17] == NULL) {
      OPS_opencl_core.constant[17] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[17], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rc6")) {
    if (OPS_opencl_core.constant[18] == NULL) {
      OPS_opencl_core.constant[18] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[18], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rc7")) {
    if (OPS_opencl_core.constant[19] == NULL) {
      OPS_opencl_core.constant[19] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[19], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rc8")) {
    if (OPS_opencl_core.constant[20] == NULL) {
      OPS_opencl_core.constant[20] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[20], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rc9")) {
    if (OPS_opencl_core.constant[21] == NULL) {
      OPS_opencl_core.constant[21] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[21], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rc10")) {
    if (OPS_opencl_core.constant[22] == NULL) {
      OPS_opencl_core.constant[22] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[22], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rcinv11")) {
    if (OPS_opencl_core.constant[23] == NULL) {
      OPS_opencl_core.constant[23] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[23], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rc12")) {
    if (OPS_opencl_core.constant[24] == NULL) {
      OPS_opencl_core.constant[24] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[24], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rcinv13")) {
    if (OPS_opencl_core.constant[25] == NULL) {
      OPS_opencl_core.constant[25] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[25], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  if (!strcmp(name,"rcinv14")) {
    if (OPS_opencl_core.constant[26] == NULL) {
      OPS_opencl_core.constant[26] = clCreateBuffer(OPS_opencl_core.context, CL_MEM_READ_ONLY, dim*typeSize, NULL, &ret);
      clSafeCall( ret );
    }
    //Write the new constant to the memory of the device
    clSafeCall( clEnqueueWriteBuffer(OPS_opencl_core.command_queue, OPS_opencl_core.constant[26], CL_TRUE, 0, dim*typeSize, (void*) dat, 0, NULL, NULL) );
    clSafeCall( clFlush(OPS_opencl_core.command_queue) );
    clSafeCall( clFinish(OPS_opencl_core.command_queue) );
  }
  else
  {
    printf("error: unknown const name\n"); exit(1);
  }
}

extern ops_opencl_core OPS_opencl_core;

void buildOpenCLKernels() {
  static bool isbuilt = false;

  if(!isbuilt) {
    //clSafeCall( clUnloadCompiler() );

    OPS_opencl_core.n_kernels = 87;
    OPS_opencl_core.kernel = (cl_kernel*) malloc(87*sizeof(cl_kernel));
  }
  isbuilt = true;
}

//user kernel files
#include "opensbliblock00Kernel039_opencl_kernel.cpp"
#include "opensbliblock00Kernel038_opencl_kernel.cpp"
#include "opensbliblock00Kernel033_opencl_kernel.cpp"
#include "opensbliblock00Kernel032_opencl_kernel.cpp"
#include "opensbliblock00Kernel031_opencl_kernel.cpp"
#include "opensbliblock00Kernel030_opencl_kernel.cpp"
#include "opensbliblock00Kernel037_opencl_kernel.cpp"
#include "opensbliblock00Kernel036_opencl_kernel.cpp"
#include "opensbliblock00Kernel035_opencl_kernel.cpp"
#include "opensbliblock00Kernel034_opencl_kernel.cpp"
#include "opensbliblock00Kernel008_opencl_kernel.cpp"
#include "opensbliblock00Kernel009_opencl_kernel.cpp"
#include "opensbliblock00Kernel006_opencl_kernel.cpp"
#include "opensbliblock00Kernel007_opencl_kernel.cpp"
#include "opensbliblock00Kernel004_opencl_kernel.cpp"
#include "opensbliblock00Kernel003_opencl_kernel.cpp"
#include "opensbliblock00Kernel000_opencl_kernel.cpp"
#include "opensbliblock00Kernel001_opencl_kernel.cpp"
#include "opensbliblock00Kernel086_opencl_kernel.cpp"
#include "opensbliblock00Kernel087_opencl_kernel.cpp"
#include "opensbliblock00Kernel084_opencl_kernel.cpp"
#include "opensbliblock00Kernel085_opencl_kernel.cpp"
#include "opensbliblock00Kernel082_opencl_kernel.cpp"
#include "opensbliblock00Kernel083_opencl_kernel.cpp"
#include "opensbliblock00Kernel080_opencl_kernel.cpp"
#include "opensbliblock00Kernel081_opencl_kernel.cpp"
#include "opensbliblock00Kernel088_opencl_kernel.cpp"
#include "opensbliblock00Kernel089_opencl_kernel.cpp"
#include "opensbliblock00Kernel091_opencl_kernel.cpp"
#include "opensbliblock00Kernel090_opencl_kernel.cpp"
#include "opensbliblock00Kernel011_opencl_kernel.cpp"
#include "opensbliblock00Kernel013_opencl_kernel.cpp"
#include "opensbliblock00Kernel015_opencl_kernel.cpp"
#include "opensbliblock00Kernel014_opencl_kernel.cpp"
#include "opensbliblock00Kernel016_opencl_kernel.cpp"
#include "opensbliblock00Kernel019_opencl_kernel.cpp"
#include "opensbliblock00Kernel018_opencl_kernel.cpp"
#include "opensbliblock00Kernel064_opencl_kernel.cpp"
#include "opensbliblock00Kernel065_opencl_kernel.cpp"
#include "opensbliblock00Kernel066_opencl_kernel.cpp"
#include "opensbliblock00Kernel067_opencl_kernel.cpp"
#include "opensbliblock00Kernel060_opencl_kernel.cpp"
#include "opensbliblock00Kernel061_opencl_kernel.cpp"
#include "opensbliblock00Kernel062_opencl_kernel.cpp"
#include "opensbliblock00Kernel063_opencl_kernel.cpp"
#include "opensbliblock00Kernel068_opencl_kernel.cpp"
#include "opensbliblock00Kernel069_opencl_kernel.cpp"
#include "opensbliblock00Kernel077_opencl_kernel.cpp"
#include "opensbliblock00Kernel076_opencl_kernel.cpp"
#include "opensbliblock00Kernel075_opencl_kernel.cpp"
#include "opensbliblock00Kernel074_opencl_kernel.cpp"
#include "opensbliblock00Kernel073_opencl_kernel.cpp"
#include "opensbliblock00Kernel072_opencl_kernel.cpp"
#include "opensbliblock00Kernel071_opencl_kernel.cpp"
#include "opensbliblock00Kernel070_opencl_kernel.cpp"
#include "opensbliblock00Kernel079_opencl_kernel.cpp"
#include "opensbliblock00Kernel078_opencl_kernel.cpp"
#include "opensbliblock00Kernel048_opencl_kernel.cpp"
#include "opensbliblock00Kernel049_opencl_kernel.cpp"
#include "opensbliblock00Kernel042_opencl_kernel.cpp"
#include "opensbliblock00Kernel043_opencl_kernel.cpp"
#include "opensbliblock00Kernel040_opencl_kernel.cpp"
#include "opensbliblock00Kernel041_opencl_kernel.cpp"
#include "opensbliblock00Kernel046_opencl_kernel.cpp"
#include "opensbliblock00Kernel047_opencl_kernel.cpp"
#include "opensbliblock00Kernel044_opencl_kernel.cpp"
#include "opensbliblock00Kernel045_opencl_kernel.cpp"
#include "opensbliblock00Kernel059_opencl_kernel.cpp"
#include "opensbliblock00Kernel058_opencl_kernel.cpp"
#include "opensbliblock00Kernel055_opencl_kernel.cpp"
#include "opensbliblock00Kernel054_opencl_kernel.cpp"
#include "opensbliblock00Kernel057_opencl_kernel.cpp"
#include "opensbliblock00Kernel056_opencl_kernel.cpp"
#include "opensbliblock00Kernel051_opencl_kernel.cpp"
#include "opensbliblock00Kernel050_opencl_kernel.cpp"
#include "opensbliblock00Kernel053_opencl_kernel.cpp"
#include "opensbliblock00Kernel052_opencl_kernel.cpp"
#include "opensbliblock00Kernel028_opencl_kernel.cpp"
#include "opensbliblock00Kernel029_opencl_kernel.cpp"
#include "opensbliblock00Kernel020_opencl_kernel.cpp"
#include "opensbliblock00Kernel021_opencl_kernel.cpp"
#include "opensbliblock00Kernel022_opencl_kernel.cpp"
#include "opensbliblock00Kernel023_opencl_kernel.cpp"
#include "opensbliblock00Kernel024_opencl_kernel.cpp"
#include "opensbliblock00Kernel025_opencl_kernel.cpp"
#include "opensbliblock00Kernel026_opencl_kernel.cpp"
#include "opensbliblock00Kernel027_opencl_kernel.cpp"