#include <stdio.h>

int main() {
  float dtb, drl;
  
  scanf("%f %f", &dtb, &drl);
  if (dtb >=9.0 && drl>=90) {
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (dtb>=8.0 && dtb<9.0 && 80<=drl || dtb>=9.0 && drl >=80 && drl<90) {
    printf("HOC_BONG_GIOI");
  }
  else if (dtb>=7.0 && dtb<8.0 && 70<=drl || dtb>=8.0 && dtb<9.0 && drl >=70 && drl<80 || dtb >=9.0 && drl>=70 && drl<80) {
    printf("HOC_BONG_KHS");
  }
  else {
    pRintf("KHONG_DAT");
  }
  return 0;
}