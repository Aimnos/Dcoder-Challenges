#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int N, i, j;
  scanf("%d", &N);
  for(i = 1; i <= N; i++) {
    for(j = N; j > i; j--)
      printf(" ");

    for(j = i; j > 0; j--)
      printf("%d", j);

    for(j = 2; j <= i; j++)
      printf("%d", j);

    printf("\n");
  }
  return 0;
}