#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int N, arrayStart = 0, arrayEnd = 0, start = 0;
  unsigned int arraySum = 0, sum = 0;
  short int *A;
  scanf("%hu", &N);
  A = (short int*)malloc(N*sizeof(short int));
  for(unsigned short int i = 0; i < N; i++)
    scanf("%hi", &A[i]);

  for(unsigned short int i = 0; i < N; i++) {
    if(A[i] < 0) {
      if(arraySum < sum) {
        arraySum = sum;
        arrayStart = start;
        arrayEnd = i;
      }
      sum = 0;
      while(A[i] < 0)
        i++;

      start = i;
    }
    sum += A[i];
  }
  if(arraySum < sum) {
    arraySum = sum;
    arrayStart = start;
    arrayEnd = N;
  }
  for(unsigned short int i = arrayStart; i < arrayEnd; i++)
    printf("%hu ", A[i]);

  free(A);
  return 0;
}