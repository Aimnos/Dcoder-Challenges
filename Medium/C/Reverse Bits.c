#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, b[16], i, j, m;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%d", &N);
    if(N == 65536)
      printf("1\n");
    else {
      for(j = 0; j < 16; j++) {
        if(N == 0)
          break;

        if(N%2 == 1)
          b[j] = 1;
        else
          b[j] = 0;

        N /= 2;
      }
      m = 1;
      while(j > 0) {
        j--;
        N += b[j]*m;
        m *= 2;
      }
      printf("%d\n", N);
    }
  }
  return 0;
}