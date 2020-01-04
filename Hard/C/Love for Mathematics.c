#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int N, i, j;
  long int *X, *Y, books = 0, students = 0, happy;
  scanf("%i", &N);
  X = (long int*)malloc(N*sizeof(long int));
  Y = (long int*)malloc(N*sizeof(long int));
  for(i = 0; i < N; i++)
    scanf("%li %li", &X[i], &Y[i]);

  for(i = 0; i < N; i++) {
    happy = 0;
    for(j = 0; j < N; j++)
      if(X[i] >= X[j] && X[i] <= Y[j])
        happy++;

    if(happy > students || (happy == students && X[i] < books)) {
      students = happy;
      books = X[i];
    }
  }
  printf("%li %li", books, students);
  free(X);
  free(Y);
  return 0;
}