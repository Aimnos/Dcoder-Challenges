#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, x, i, m;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    m = 1;
    scanf("%d", &x);
    if(x == 0 || x%6 != 0)
      printf("%d ", x);
    else {
      while(m < x) {
        printf("*");
        m *= 10;
      }
      printf(" ");
    }
  }
  return 0;
}