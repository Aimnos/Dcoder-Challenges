#include  <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a + b > 21) {
    if(a == 11 || b == 11)
      printf("%d", a + b - 10);
    else
      printf("0");

  } else
    printf("%d", a + b);

  return 0;
}