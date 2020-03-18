#include <stdio.h>

int main() {
  unsigned short int T, N, K, element;
  scanf("%hu", &T);
  for(unsigned short int i = 0; i < T; i++) {
    scanf("%hu %hu", &N, &K);
    for(unsigned short int j = 0; j < N; j++) {
      scanf("%hu", &element);
      K = K^element;
    }
    printf("%hu\n", K);
  }
  return 0;
}