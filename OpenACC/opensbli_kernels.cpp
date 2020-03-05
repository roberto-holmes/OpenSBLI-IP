//
// auto-generated by ops.py//

#include "./OpenACC/opensbli_common.h"

#include <openacc.h>

void ops_init_backend() {acc_set_device_num(ops_get_proc()%acc_get_num_devices(acc_device_nvidia),acc_device_nvidia); ops_device_initialised_externally = 1;}

void ops_decl_const_char(int dim, char const *type,
int size, char *dat, char const *name){
  if (!strcmp(name,"block0np0")) {
    block0np0 = *(int*)dat;
  }
  else
  if (!strcmp(name,"block0np1")) {
    block0np1 = *(int*)dat;
  }
  else
  if (!strcmp(name,"block0np2")) {
    block0np2 = *(int*)dat;
  }
  else
  if (!strcmp(name,"Delta0block0")) {
    Delta0block0 = *(double*)dat;
  }
  else
  if (!strcmp(name,"Delta1block0")) {
    Delta1block0 = *(double*)dat;
  }
  else
  if (!strcmp(name,"Delta2block0")) {
    Delta2block0 = *(double*)dat;
  }
  else
  if (!strcmp(name,"niter")) {
    niter = *(int*)dat;
  }
  else
  if (!strcmp(name,"dt")) {
    dt = *(double*)dat;
  }
  else
  if (!strcmp(name,"Minf")) {
    Minf = *(double*)dat;
  }
  else
  if (!strcmp(name,"gama")) {
    gama = *(double*)dat;
  }
  else
  if (!strcmp(name,"Pr")) {
    Pr = *(double*)dat;
  }
  else
  if (!strcmp(name,"Re")) {
    Re = *(double*)dat;
  }
  else
  if (!strcmp(name,"inv_0")) {
    inv_0 = *(double*)dat;
  }
  else
  if (!strcmp(name,"inv_1")) {
    inv_1 = *(double*)dat;
  }
  else
  if (!strcmp(name,"inv_2")) {
    inv_2 = *(double*)dat;
  }
  else
  if (!strcmp(name,"inv_3")) {
    inv_3 = *(double*)dat;
  }
  else
  if (!strcmp(name,"inv_4")) {
    inv_4 = *(double*)dat;
  }
  else
  if (!strcmp(name,"inv_5")) {
    inv_5 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc6")) {
    rc6 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rcinv7")) {
    rcinv7 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc8")) {
    rc8 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc9")) {
    rc9 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rcinv10")) {
    rcinv10 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rcinv11")) {
    rcinv11 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc12")) {
    rc12 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc13")) {
    rc13 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc14")) {
    rc14 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc15")) {
    rc15 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc16")) {
    rc16 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc17")) {
    rc17 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc18")) {
    rc18 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc19")) {
    rc19 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc20")) {
    rc20 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc21")) {
    rc21 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc22")) {
    rc22 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc23")) {
    rc23 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc24")) {
    rc24 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc25")) {
    rc25 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc26")) {
    rc26 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc27")) {
    rc27 = *(double*)dat;
  }
  else
  if (!strcmp(name,"rc28")) {
    rc28 = *(double*)dat;
  }
  else
  {
    printf("error: unknown const name\n"); exit(1);
  }
}

//user kernel files
#include "opensbliblock00Kernel088_openacc_kernel.cpp"
#include "opensbliblock00Kernel082_openacc_kernel.cpp"
#include "opensbliblock00Kernel083_openacc_kernel.cpp"
#include "opensbliblock00Kernel084_openacc_kernel.cpp"
#include "opensbliblock00Kernel085_openacc_kernel.cpp"
#include "opensbliblock00Kernel086_openacc_kernel.cpp"
#include "opensbliblock00Kernel087_openacc_kernel.cpp"
#include "opensbliblock00Kernel089_openacc_kernel.cpp"
#include "opensbliblock00Kernel041_openacc_kernel.cpp"
#include "opensbliblock00Kernel003_openacc_kernel.cpp"
#include "opensbliblock00Kernel023_openacc_kernel.cpp"
#include "opensbliblock00Kernel007_openacc_kernel.cpp"
#include "opensbliblock00Kernel080_openacc_kernel.cpp"
#include "opensbliblock00Kernel000_openacc_kernel.cpp"
#include "opensbliblock00Kernel001_openacc_kernel.cpp"
#include "opensbliblock00Kernel004_openacc_kernel.cpp"
#include "opensbliblock00Kernel006_openacc_kernel.cpp"
#include "opensbliblock00Kernel008_openacc_kernel.cpp"
#include "opensbliblock00Kernel009_openacc_kernel.cpp"
#include "opensbliblock00Kernel011_openacc_kernel.cpp"
#include "opensbliblock00Kernel013_openacc_kernel.cpp"
#include "opensbliblock00Kernel014_openacc_kernel.cpp"
#include "opensbliblock00Kernel015_openacc_kernel.cpp"
#include "opensbliblock00Kernel016_openacc_kernel.cpp"
#include "opensbliblock00Kernel018_openacc_kernel.cpp"
#include "opensbliblock00Kernel019_openacc_kernel.cpp"
#include "opensbliblock00Kernel020_openacc_kernel.cpp"
#include "opensbliblock00Kernel021_openacc_kernel.cpp"
#include "opensbliblock00Kernel022_openacc_kernel.cpp"
#include "opensbliblock00Kernel024_openacc_kernel.cpp"
#include "opensbliblock00Kernel025_openacc_kernel.cpp"
#include "opensbliblock00Kernel026_openacc_kernel.cpp"
#include "opensbliblock00Kernel027_openacc_kernel.cpp"
#include "opensbliblock00Kernel028_openacc_kernel.cpp"
#include "opensbliblock00Kernel029_openacc_kernel.cpp"
#include "opensbliblock00Kernel030_openacc_kernel.cpp"
#include "opensbliblock00Kernel031_openacc_kernel.cpp"
#include "opensbliblock00Kernel032_openacc_kernel.cpp"
#include "opensbliblock00Kernel033_openacc_kernel.cpp"
#include "opensbliblock00Kernel034_openacc_kernel.cpp"
#include "opensbliblock00Kernel035_openacc_kernel.cpp"
#include "opensbliblock00Kernel036_openacc_kernel.cpp"
#include "opensbliblock00Kernel037_openacc_kernel.cpp"
#include "opensbliblock00Kernel038_openacc_kernel.cpp"
#include "opensbliblock00Kernel039_openacc_kernel.cpp"
#include "opensbliblock00Kernel040_openacc_kernel.cpp"
#include "opensbliblock00Kernel042_openacc_kernel.cpp"
#include "opensbliblock00Kernel043_openacc_kernel.cpp"
#include "opensbliblock00Kernel044_openacc_kernel.cpp"
#include "opensbliblock00Kernel045_openacc_kernel.cpp"
#include "opensbliblock00Kernel046_openacc_kernel.cpp"
#include "opensbliblock00Kernel047_openacc_kernel.cpp"
#include "opensbliblock00Kernel048_openacc_kernel.cpp"
#include "opensbliblock00Kernel049_openacc_kernel.cpp"
#include "opensbliblock00Kernel050_openacc_kernel.cpp"
#include "opensbliblock00Kernel051_openacc_kernel.cpp"
#include "opensbliblock00Kernel052_openacc_kernel.cpp"
#include "opensbliblock00Kernel053_openacc_kernel.cpp"
#include "opensbliblock00Kernel054_openacc_kernel.cpp"
#include "opensbliblock00Kernel055_openacc_kernel.cpp"
#include "opensbliblock00Kernel057_openacc_kernel.cpp"
#include "opensbliblock00Kernel058_openacc_kernel.cpp"
#include "opensbliblock00Kernel059_openacc_kernel.cpp"
#include "opensbliblock00Kernel060_openacc_kernel.cpp"
#include "opensbliblock00Kernel061_openacc_kernel.cpp"
#include "opensbliblock00Kernel063_openacc_kernel.cpp"
#include "opensbliblock00Kernel064_openacc_kernel.cpp"
#include "opensbliblock00Kernel066_openacc_kernel.cpp"
#include "opensbliblock00Kernel067_openacc_kernel.cpp"
#include "opensbliblock00Kernel068_openacc_kernel.cpp"
#include "opensbliblock00Kernel070_openacc_kernel.cpp"
#include "opensbliblock00Kernel071_openacc_kernel.cpp"
#include "opensbliblock00Kernel072_openacc_kernel.cpp"
#include "opensbliblock00Kernel073_openacc_kernel.cpp"
#include "opensbliblock00Kernel075_openacc_kernel.cpp"
#include "opensbliblock00Kernel065_openacc_kernel.cpp"
#include "opensbliblock00Kernel078_openacc_kernel.cpp"
#include "opensbliblock00Kernel079_openacc_kernel.cpp"
#include "opensbliblock00Kernel056_openacc_kernel.cpp"
#include "opensbliblock00Kernel062_openacc_kernel.cpp"
#include "opensbliblock00Kernel069_openacc_kernel.cpp"
#include "opensbliblock00Kernel077_openacc_kernel.cpp"
#include "opensbliblock00Kernel074_openacc_kernel.cpp"
#include "opensbliblock00Kernel076_openacc_kernel.cpp"
#include "opensbliblock00Kernel081_openacc_kernel.cpp"
#include "opensbliblock00Kernel091_openacc_kernel.cpp"
#include "opensbliblock00Kernel090_openacc_kernel.cpp"
