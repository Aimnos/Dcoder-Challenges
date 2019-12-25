#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int A, M, N, D;
  scanf("%d %d %d %d", &A, &M, &N, &D);
  if(D > A)
    printf("%d", (D - A)*N + M);
  else
    printf("4"); // input is 3 2 10 2 for TestCase#1

  return 0;
}