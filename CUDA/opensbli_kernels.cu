//
// auto-generated by ops.py//

//header
#define OPS_API 2
#define OPS_3D
#include "ops_lib_cpp.h"

#include "ops_cuda_rt_support.h"
#include "ops_cuda_reduction.h"

#include <cuComplex.h>

#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif
// global constants
__constant__ int block0np0;
__constant__ int block0np1;
__constant__ int block0np2;
__constant__ double Delta0block0;
__constant__ double Delta1block0;
__constant__ double Delta2block0;
__constant__ int niter;
__constant__ double dt;
__constant__ double Minf;
__constant__ double gama;
__constant__ double Pr;
__constant__ double Re;
__constant__ double inv_0;
__constant__ double inv_1;
__constant__ double inv_2;
__constant__ double inv_3;
__constant__ double inv_4;
__constant__ double inv_5;
__constant__ double rc6;
__constant__ double rcinv7;
__constant__ double rc8;
__constant__ double rc9;
__constant__ double rcinv10;
__constant__ double rcinv11;
__constant__ double rc12;
__constant__ double rc13;
__constant__ double rc14;
__constant__ double rc15;
__constant__ double rc16;
__constant__ double rc17;
__constant__ double rc18;
__constant__ double rc19;
__constant__ double rc20;
__constant__ double rc21;
__constant__ double rc22;
__constant__ double rc23;
__constant__ double rc24;
__constant__ double rc25;
__constant__ double rc26;
__constant__ double rc27;
__constant__ double rc28;

void ops_init_backend() {}

void ops_decl_const_char(int dim, char const *type,
int size, char *dat, char const *name){
  if (!strcmp(name,"block0np0")) {
    cutilSafeCall(cudaMemcpyToSymbol(block0np0, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np1")) {
    cutilSafeCall(cudaMemcpyToSymbol(block0np1, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np2")) {
    cutilSafeCall(cudaMemcpyToSymbol(block0np2, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta0block0")) {
    cutilSafeCall(cudaMemcpyToSymbol(Delta0block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta1block0")) {
    cutilSafeCall(cudaMemcpyToSymbol(Delta1block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta2block0")) {
    cutilSafeCall(cudaMemcpyToSymbol(Delta2block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"niter")) {
    cutilSafeCall(cudaMemcpyToSymbol(niter, dat, dim*size));
  }
  else
  if (!strcmp(name,"dt")) {
    cutilSafeCall(cudaMemcpyToSymbol(dt, dat, dim*size));
  }
  else
  if (!strcmp(name,"Minf")) {
    cutilSafeCall(cudaMemcpyToSymbol(Minf, dat, dim*size));
  }
  else
  if (!strcmp(name,"gama")) {
    cutilSafeCall(cudaMemcpyToSymbol(gama, dat, dim*size));
  }
  else
  if (!strcmp(name,"Pr")) {
    cutilSafeCall(cudaMemcpyToSymbol(Pr, dat, dim*size));
  }
  else
  if (!strcmp(name,"Re")) {
    cutilSafeCall(cudaMemcpyToSymbol(Re, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_0")) {
    cutilSafeCall(cudaMemcpyToSymbol(inv_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_1")) {
    cutilSafeCall(cudaMemcpyToSymbol(inv_1, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_2")) {
    cutilSafeCall(cudaMemcpyToSymbol(inv_2, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_3")) {
    cutilSafeCall(cudaMemcpyToSymbol(inv_3, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_4")) {
    cutilSafeCall(cudaMemcpyToSymbol(inv_4, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_5")) {
    cutilSafeCall(cudaMemcpyToSymbol(inv_5, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc6")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc6, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv7")) {
    cutilSafeCall(cudaMemcpyToSymbol(rcinv7, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc8")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc8, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc9")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc9, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv10")) {
    cutilSafeCall(cudaMemcpyToSymbol(rcinv10, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv11")) {
    cutilSafeCall(cudaMemcpyToSymbol(rcinv11, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc12")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc12, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc13")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc13, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc14")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc14, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc15")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc15, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc16")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc16, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc17")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc17, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc18")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc18, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc19")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc19, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc20")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc20, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc21")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc21, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc22")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc22, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc23")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc23, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc24")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc24, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc25")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc25, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc26")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc26, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc27")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc27, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc28")) {
    cutilSafeCall(cudaMemcpyToSymbol(rc28, dat, dim*size));
  }
  else
  {
    printf("error: unknown const name\n"); exit(1);
  }
}


//user kernel files
#include "opensbliblock00Kernel088_cuda_kernel.cu"
#include "opensbliblock00Kernel082_cuda_kernel.cu"
#include "opensbliblock00Kernel083_cuda_kernel.cu"
#include "opensbliblock00Kernel084_cuda_kernel.cu"
#include "opensbliblock00Kernel085_cuda_kernel.cu"
#include "opensbliblock00Kernel086_cuda_kernel.cu"
#include "opensbliblock00Kernel087_cuda_kernel.cu"
#include "opensbliblock00Kernel089_cuda_kernel.cu"
#include "opensbliblock00Kernel041_cuda_kernel.cu"
#include "opensbliblock00Kernel003_cuda_kernel.cu"
#include "opensbliblock00Kernel023_cuda_kernel.cu"
#include "opensbliblock00Kernel007_cuda_kernel.cu"
#include "opensbliblock00Kernel080_cuda_kernel.cu"
#include "opensbliblock00Kernel000_cuda_kernel.cu"
#include "opensbliblock00Kernel001_cuda_kernel.cu"
#include "opensbliblock00Kernel004_cuda_kernel.cu"
#include "opensbliblock00Kernel006_cuda_kernel.cu"
#include "opensbliblock00Kernel008_cuda_kernel.cu"
#include "opensbliblock00Kernel009_cuda_kernel.cu"
#include "opensbliblock00Kernel011_cuda_kernel.cu"
#include "opensbliblock00Kernel013_cuda_kernel.cu"
#include "opensbliblock00Kernel014_cuda_kernel.cu"
#include "opensbliblock00Kernel015_cuda_kernel.cu"
#include "opensbliblock00Kernel016_cuda_kernel.cu"
#include "opensbliblock00Kernel018_cuda_kernel.cu"
#include "opensbliblock00Kernel019_cuda_kernel.cu"
#include "opensbliblock00Kernel020_cuda_kernel.cu"
#include "opensbliblock00Kernel021_cuda_kernel.cu"
#include "opensbliblock00Kernel022_cuda_kernel.cu"
#include "opensbliblock00Kernel024_cuda_kernel.cu"
#include "opensbliblock00Kernel025_cuda_kernel.cu"
#include "opensbliblock00Kernel026_cuda_kernel.cu"
#include "opensbliblock00Kernel027_cuda_kernel.cu"
#include "opensbliblock00Kernel028_cuda_kernel.cu"
#include "opensbliblock00Kernel029_cuda_kernel.cu"
#include "opensbliblock00Kernel030_cuda_kernel.cu"
#include "opensbliblock00Kernel031_cuda_kernel.cu"
#include "opensbliblock00Kernel032_cuda_kernel.cu"
#include "opensbliblock00Kernel033_cuda_kernel.cu"
#include "opensbliblock00Kernel034_cuda_kernel.cu"
#include "opensbliblock00Kernel035_cuda_kernel.cu"
#include "opensbliblock00Kernel036_cuda_kernel.cu"
#include "opensbliblock00Kernel037_cuda_kernel.cu"
#include "opensbliblock00Kernel038_cuda_kernel.cu"
#include "opensbliblock00Kernel039_cuda_kernel.cu"
#include "opensbliblock00Kernel040_cuda_kernel.cu"
#include "opensbliblock00Kernel042_cuda_kernel.cu"
#include "opensbliblock00Kernel043_cuda_kernel.cu"
#include "opensbliblock00Kernel044_cuda_kernel.cu"
#include "opensbliblock00Kernel045_cuda_kernel.cu"
#include "opensbliblock00Kernel046_cuda_kernel.cu"
#include "opensbliblock00Kernel047_cuda_kernel.cu"
#include "opensbliblock00Kernel048_cuda_kernel.cu"
#include "opensbliblock00Kernel049_cuda_kernel.cu"
#include "opensbliblock00Kernel050_cuda_kernel.cu"
#include "opensbliblock00Kernel051_cuda_kernel.cu"
#include "opensbliblock00Kernel052_cuda_kernel.cu"
#include "opensbliblock00Kernel053_cuda_kernel.cu"
#include "opensbliblock00Kernel054_cuda_kernel.cu"
#include "opensbliblock00Kernel055_cuda_kernel.cu"
#include "opensbliblock00Kernel057_cuda_kernel.cu"
#include "opensbliblock00Kernel058_cuda_kernel.cu"
#include "opensbliblock00Kernel059_cuda_kernel.cu"
#include "opensbliblock00Kernel060_cuda_kernel.cu"
#include "opensbliblock00Kernel061_cuda_kernel.cu"
#include "opensbliblock00Kernel063_cuda_kernel.cu"
#include "opensbliblock00Kernel064_cuda_kernel.cu"
#include "opensbliblock00Kernel066_cuda_kernel.cu"
#include "opensbliblock00Kernel067_cuda_kernel.cu"
#include "opensbliblock00Kernel068_cuda_kernel.cu"
#include "opensbliblock00Kernel070_cuda_kernel.cu"
#include "opensbliblock00Kernel071_cuda_kernel.cu"
#include "opensbliblock00Kernel072_cuda_kernel.cu"
#include "opensbliblock00Kernel073_cuda_kernel.cu"
#include "opensbliblock00Kernel075_cuda_kernel.cu"
#include "opensbliblock00Kernel065_cuda_kernel.cu"
#include "opensbliblock00Kernel078_cuda_kernel.cu"
#include "opensbliblock00Kernel079_cuda_kernel.cu"
#include "opensbliblock00Kernel056_cuda_kernel.cu"
#include "opensbliblock00Kernel062_cuda_kernel.cu"
#include "opensbliblock00Kernel069_cuda_kernel.cu"
#include "opensbliblock00Kernel077_cuda_kernel.cu"
#include "opensbliblock00Kernel074_cuda_kernel.cu"
#include "opensbliblock00Kernel076_cuda_kernel.cu"
#include "opensbliblock00Kernel081_cuda_kernel.cu"
#include "opensbliblock00Kernel091_cuda_kernel.cu"
#include "opensbliblock00Kernel090_cuda_kernel.cu"
