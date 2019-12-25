#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *A1, *A2, i, size1, size2, minPos1, minPos2;
  scanf("%d", &N);
  A1 = (int*)malloc(N*sizeof(int));
  A2 = (int*)malloc(N*sizeof(int));
  for(i = 0; i < N; i++)
    scanf("%d", &A1[i]);

  for(i = 0; i < N; i++)
    scanf("%d", &A2[i]);

  size1 = N;
  size2 = N;
  while(size1 > 0 && size2 > 0) {
    minPos1 = 0;
    minPos2 = 0;
    for(i = 1; i < size1; i++)
      if(A1[i] < A1[minPos1])
        minPos1 = i;

    for(i = 1; i < size2; i++)
      if(A2[i] < A2[minPos2])
        minPos2 = i;

    if(A1[minPos1] < A2[minPos2]) {
      printf("%d ", A1[minPos1]);
      A1[minPos1] = A1[--size1];
    } else {
      printf("%d ", A2[minPos2]);
      A2[minPos2] = A2[--size2];
    }
  }
  while(size1 > 0) {
    minPos1 = 0;
    for(i = 0; i < size1; i++)
      if(A1[i] < A1[minPos1])
        minPos1 = i;

    printf("%d ", A1[minPos1]);
    A1[minPos1] = A1[--size1];
  }
  while(size2 > 0) {
    minPos2 = 0;
    for(i = 0; i < size2; i++)
      if(A2[i] < A2[minPos2])
        minPos2 = i;

    printf("%d ", A2[minPos2]);
    A2[minPos2] = A2[--size2];
  }
  free(A1);
  free(A2);
  return 0;
}