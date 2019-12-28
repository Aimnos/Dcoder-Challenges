#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  float n;
  int i = 1;
  scanf("%f", &n);
  while((int)(i*n) != i*n)
    i++;

  printf("%d", i);
  return 0;
}