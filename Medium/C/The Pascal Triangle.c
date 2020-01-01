#include <stdio.h>

//Compiler version gcc  6.3.0

int combination(int n, int p) {
  long int a = 1, b = 1;
  if(p == 0)
    return 1;

  if(p > n/2)
    p = n - p;

  while(p > 0) {
    a *= n;
    b *= p;
    n--;
    p--;
  }
  return a/b;
}

int main() {
  int n, i, j, x;
  scanf("%i", &n);
  for(i = 0; i < n; i++) {
    for(j = n - 1; j > i; j--)
      printf(" ");

    for(j = 0; j < i; j++) {
      x = combination(i, j);
      printf("%i ", x);
    }
    printf("1\n");
  }
  return 0;
}