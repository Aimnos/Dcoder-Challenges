#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, i, j;
  long int M;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%d %ld", &N, &M);
    if(M%(N + 1) > 0)
      printf("%d", M/(N + 1) + 1);
    else
      printf("%d", M/(N + 1));

    for(j = 1; j < M%(N + 1); j++)
      printf(" %d", M/(N + 1) + 1);

    for(j = M%(N + 1); j < N + 1; j++)
      printf(" %d", M/(N + 1));

    printf("\n");
 }
  return 0;
}