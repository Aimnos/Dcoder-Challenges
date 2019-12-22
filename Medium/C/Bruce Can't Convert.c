#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  unsigned long int N;
  int T, i, B, j = 0, x[17];
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%lu %d", &N, &B);
    while(N > 0) {
      x[j++] = N%B;
      N /= B;
    }
    while(j > 0) {
      if(x[--j] > 9)
        printf("%c", x[j] - 10 + 'A');
      else
        printf("%d", x[j]);

    }
    printf("\n");
  }
  return 0;
}