#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int N, M, **matrix, cost = 0;
  scanf("%hu %hu", &N, &M);
  matrix = (unsigned short int**)malloc(N*sizeof(short int*));
  for(unsigned short int i = 0; i < N; i++)
    matrix[i] = (unsigned short int*)malloc(M*sizeof(short int));

  for(unsigned short int i = 0; i < N; i++)
    for(unsigned short int j = 0; j < M; j++)
      scanf("%hu", &matrix[i][j]);

  for(unsigned short int i = 0; i < N; i++) {
    for(unsigned short int j = 0; j < M; j++) {
      if(matrix[i][j] == 0)
        for(unsigned short int k = i; k < N; k++)
          matrix[k][j] = 0;

      cost += matrix[i][j];
    }
    free(matrix[i]);
  }
  printf("%hu", cost);
  free(matrix);
  return 0;
}