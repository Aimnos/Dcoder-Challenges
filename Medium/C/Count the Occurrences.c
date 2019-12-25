#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *A, Q, x, y, i, j;
  scanf("%d", &N);
  A = (int*)malloc(N*sizeof(int));
  for(i = 0; i < N; i++)
    scanf("%d", &A[i]);

  scanf("%d", &Q);
  for(i = 0; i < Q; i++) {
    y = 0;
    scanf("%d", &x);
    for(j = 0; j < N; j++)
      if(A[j] == x)
        y++;

    if(y == 0)
      printf("-1\n");
    else
      printf("%d\n", y);

  }
  free(A);
  return 0;
}