#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, i, m;
  scanf("%i", &T);
  for(i = 0; i < T; i++) {
    scanf("%i", &N);
    m = 1;
    while(m <= N)
      m *= 2;

    printf("%i\n", 2*N - m + 1);
  }
  return 0;
}