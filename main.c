#include <stdio.h>

int main() {
  float dtb,XUAT_SAC,GIOI,KHA,KHONG_DAT;
  int drl;
  scanf("%d %d", &dtb, &drl);
  if (dtb>=9.0)
  {
    printf("XUAT_SAC");
  }
  else if (dtb>=8.0) {
    printf("GIOI");
  }
   else if (dtb>=7.0) {
    printf("KHA");
  }
   else  {
    printf("KHONG_DAT");
  }
   if (drl>=90)
  {
    printf("XUAT_SAC");
  }
  else if (drl>=80) {
    printf("GIOI");
  }
   else if (drl>=70) {
    printf("KHA");
  }
   else  {
    printf("KHONG_DAT");
  }
  
  return 0;
}