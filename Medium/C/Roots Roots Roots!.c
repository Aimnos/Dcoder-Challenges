#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  float a, b, c, delta, sum;
  scanf("%f %f %f", &a, &b, &c);
  delta = b*b - 4*a*c;
  if(delta >= 0)
    printf("%.2f", -b/a);
  else
    printf(" ");

  return 0;
}