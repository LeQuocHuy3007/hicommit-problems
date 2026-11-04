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
  if (dtb==XUAT_SAC && drl==XUAT_SAC) {
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (dtb==GIOI && drl==TOT||XUAT_SAC || dtb==XUAT_SAC && drl==TOT) {
    printf("HOC_BONG_GIOI");
  }
  else if ((dtb==KHA && drl==KHA||TOT||XUAT_SAC) || (dtb==GIOI||XUAT_SAC && drl==KHA)) {
    printf("HOC_BONG_KHA");
  }
  else {
    printf("KHONG_DAT");
  }
  return 0;
}