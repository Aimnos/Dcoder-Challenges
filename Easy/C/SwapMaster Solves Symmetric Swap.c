#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *A, i;
  scanf("%d", &N);
  A = (int*)malloc(N*sizeof(int));
  for(i = 0; i < N; i++)
    scanf("%d", &A[i]);

  for(i = N - 1; i >= 0; i--)
    if(A[i]>= 1 && A[i] <= 1000)
      printf("%d ", A[i]);

  free(A);
  return 0;
}