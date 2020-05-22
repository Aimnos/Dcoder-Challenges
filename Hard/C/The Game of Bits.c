#include <stdio.h>

int main() {
  unsigned short int T, N, S, xor;
  scanf("%hu", &T);
  for(unsigned short int i = 0; i < T; i++) {
    scanf("%hu", &N);
    xor = 0;
    for(unsigned short int j = 0; j < N; j++) {
      scanf("%hu", &S);
      xor = xor^xor;
      for(unsigned short int k = 0; k < j*(j + 1)/2 + 1; k++)
        xor = xor^S;

    }
    printf("%hu\n", xor);
  }
  return 0;
}