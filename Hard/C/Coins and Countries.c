#include <stdio.h>

int main() {
  unsigned short int T, N, R;
  scanf("%hu", &T);
  for(unsigned short int i = 0; i < T; i++) {
    scanf("%hu %hu", &N, &R);
    N--;
    R--;
    unsigned int n = 1;
    unsigned int d = 1;
    for(unsigned short int j = 1; j <= N - R; j++) {
      n *= j + R;
      d *= j;
    }
    printf("%u\n", n/d);
  }
  return 0;
}