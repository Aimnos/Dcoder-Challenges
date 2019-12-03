#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc 6.3.0

int main() {
  int N, k, *x, i, sum, high = -1, j;
  scanf("%d %d", &N, &k);
  x = (int*)calloc(N, sizeof(int));
  for(i - 0; i < N; i++)
    scanf("%d", &x[i]);

  for(int i = 0; i <= N - k; i++) {
    sum = 0;
    for(j = i; j < i + k; j++)
      sum += x[j];

    if(sum > high)
      high = sum;

  }
  printf("%d", high);
  free(x);
  return 0;
}