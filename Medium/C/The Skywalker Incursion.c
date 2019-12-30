#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  unsigned int x1 = 2, x2 = 1, aux, N;
  scanf("%u", &N);
  if(N < 2)
    printf("1");
  else {
    while(x2 <= N) {
      aux = x1 + x2;
      x1 = x2;
      x2 = aux;
    }
    printf("%u\n", x2);
  }
  return 0;
}