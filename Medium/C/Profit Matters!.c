#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char a;
  unsigned long int x, max = 0, min = 1000000;
  scanf("%c", &a);
  while(a == '[' || a == ',') {
    scanf("%lu", &x);
    if(x > max)
      max = x;

    if(x < min)
      min = x;

    scanf("%c", &a);
  }
  printf("[%lu", min);
  if(max > min)
    printf(",%lu", max);

  printf("]");
  return 0;
}