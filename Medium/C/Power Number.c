#include <stdio.h>

//Compiler version gcc 6.3.0

long long int supPow(int a) {
  long long int x = 1;
  long long int y = a;
  while(a > 1) {
    if(a%2 == 0) {
      y *= y;
      a /= 2;
    } else {
      x *= y;
      a -= 1;
    }
  }
  return x*y;
}

int main () {
  int N, i, j;
  long long int A;
  scanf("%d", &N);
  for(i = 0; i < N; i++) {
    scanf("%lld", &A);
    j = 1;
    while(supPow(j) < A)
      j++;

    if(supPow(j) == A)
      printf("Yes ");
    else
      printf("No ");

  }
  return 0;
}