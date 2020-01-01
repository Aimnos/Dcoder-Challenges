#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int N, i, A;
  long int x = 1;
  scanf("%i", &N);
  for(i = 0; i < N; i++) {
    scanf("%i", &A);
    x = (x*A)%1000000007;
  }
  printf("%li", x);
  return 0;
}