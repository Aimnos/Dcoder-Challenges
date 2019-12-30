#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *a, i, j, highestPos, aux;
  scanf("%i", &N);
  a = (int*)malloc(N*sizeof(int));
  for(i = 0; i < N; i++)
    scanf("%i", &a[i]);

  for(i = 0; i < N - 1; i++) {
    highestPos = 0;
    for(j = 1; j < N - i; j++)
      if(a[j] > a[highestPos])
        highestPos = j;

    aux = a[highestPos];
    a[highestPos] = a[N - i - 1];
    a[N - i - 1] = aux;
  }
  if(N%2 == 1)
    printf("%i", a[N/2]);
  else
    printf("%i", a[N/2 - 1]);

  free(a);
  return 0;
}