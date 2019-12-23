#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
  int L, R, i, isPrime, j;
  scanf("%d %d", &L, &R);
  for(i = L; i <= R; i++) {
    isPrime = 1;
    for(j = 2; j <= ceil(sqrt(i)); j++)
      if(i%j == 0) {
        isPrime = 0;
        break;
      }

    if((isPrime == 1 && i != 1) || i == 2)
      printf("%d ", i);

  }
  return 0;
}