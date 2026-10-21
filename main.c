#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  if (t<15){
    printF("LANH");
  }
  else if (15<t<25)
  {
    printf("MAT");
  }
  else if  (25<t<35)
  {
    printf("NONG");
  }
  else 
  {
    printf("RAT_NONG")
  }
  return 0;
}