#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *P, Q, A, B, i, j;
  long int sum;
  scanf("%i", &N);
  P = (int*)malloc(N*sizeof(int));
  for(i = 0; i < N; i++)
    scanf("%i", &P[i]);

  scanf("%i", &Q);
  for(i = 0; i < Q; i++) {
    scanf("%i %i", &A, &B);
    sum = 0;
    for(j = A - 1; j < B; j++)
      sum += P[j];

    printf("%i\n", sum);
  }
  free(P);
  return 0;
}