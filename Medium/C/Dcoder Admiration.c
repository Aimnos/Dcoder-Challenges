#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
  unsigned long int T, N, i;
  scanf("%lu", &T);
  for(i = 0; i < T; i++) {
    scanf("%lu", &N);
    N -= floor(sqrt(N));
    printf("%lu\n", N);
  }
  return 0;
}