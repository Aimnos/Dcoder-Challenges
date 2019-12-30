#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  unsigned int x1, x2, x, aux, n, i;
  scanf("%u", &n);
  for(i = 0; i < n; i++) {
    x1 = 0;
    x2 = 1;
    scanf("%u", &x);
    while(x2 <= x) {
      aux = x1 + x2;
      x1 = x2;
      x2 = aux;
    }
    printf("%u\n", x2);
  }
  return 0;
}