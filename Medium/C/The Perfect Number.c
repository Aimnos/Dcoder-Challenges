#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, x, i, j;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    x = 1;
    scanf("%d", &N);
    for(j = 2; j < ceil(sqrt(N)); j++)
      if(N%j == 0) {
        x += j;
        if(N/j != j)
          x += N/j;

      }

    if(x == N)
      printf("True ");
    else
      printf("False ");

  }
  return 0;
}