#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  long int N, C, X, M = 0, y = 0, i, lowest = 100000, highest = 1;
  scanf("%li", &N);
  for(i = 0; i < N; i++) {
    scanf("%li %li", &C, &X);
    M += C;
    M -= X;
    if(X < lowest)
      lowest = X;

    if(C > highest)
      highest = C;

  }
  if(M + lowest > highest)
    printf("%li", M + lowest);
  else
    printf("%li", highest);

  return 0;
}