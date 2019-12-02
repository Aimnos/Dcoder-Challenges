#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int aX, aY, bX, bY;
  scanf("%d %d %d %d", &aX, &aY, &bX, &bY);
  if(aX*aX + aY*aY < bX*bX + bY*bY)
    printf("A");
  else
    printf("B");
  
  return 0;
}