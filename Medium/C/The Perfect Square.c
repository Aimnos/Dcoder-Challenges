#include <stdio.h>

//Compiler version gcc 6.3.0

int main() {
  int T, N, i, j;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%d", &N);
    j = 1;
    while(j*j < N)
      j++;

    if((j*j == N) || (j*j - N < N - (j - 1)*(j - 1)))
      printf("%d\n", j);
    else
      printf("%d\n", j - 1);

  }
  return 0;
}