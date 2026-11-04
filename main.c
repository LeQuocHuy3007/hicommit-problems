#include <stdio.h>

int main() {
  float dtb;
  char XUAT_SAC,GIOI,KHA,TOT,KHONG_DAT;
  int drl;
  scanf("%f %d", &dtb, &drl);
  if (dtb>=9.0)
  {
    dtb=XUAT_SAC;
  }
  else if (dtb>=8.0) {
     dtb=GIOI;
  }
   else if (dtb>=7.0) {
     dtb=KHA;
  }
   else  {
      dtb=KHONG_DAT;
  }
   if (drl>=90)
  {
    drl=XUAT_SAC;
  }
  else if (drl>=80) {
    drl=TOT;
  }
   else if (drl>=70) {
    drl=KHA;
  }
   else  {
    drl=KHONG_DAT;
  }
  if (dtb=>9.0 && drl=>90) {
    printf("HOC_BONG_XUAT_SAC");
  }
  else if ("9.0>dtb=>8.0 && drl>=80" || "dtb=>9.0 && 90>drl=>80") {
    printf("HOC_BONG_GIOI");
  }
  else if ("8.0>dtb=>7.0 && drl=>70" || "dtb=>8.0 && 80>drl=>70") {
    printf("HOC_BONG_KHA");
  }
  else {
    printf("KHONG_DAT");
  }
  return 0;
}