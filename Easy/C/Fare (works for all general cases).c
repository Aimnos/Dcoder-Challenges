#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int A, M, N, D;
  scanf("%d %d %d %d", &A, &M, &N, &D);
  if(D > A)
    printf("%d", (D - A)*N + M);
  else if(D > 0)
    printf("%d", M);
  else
    printf("0");

  return 0;
}