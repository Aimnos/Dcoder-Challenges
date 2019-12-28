#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  unsigned long int n, i, x, zeros = 0;
  scanf("%lu", &n);
  for(i = n; i > 4; i--) {
    x = i;
    while(x%5 == 0 && x > 0) {
      x /= 5;
      zeros++;
    }
  }
  printf("%lu", zeros);
  return 0;
}