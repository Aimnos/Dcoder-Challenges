#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, d, *a, i, x;
  scanf("%d %d", &n, &d);
  a = (int*)malloc(d*sizeof(int));
  for(i = 0; i < d; i++)
    scanf("%d", &a[i]);

  for(i = d; i < n; i++) {
    scanf("%d", &x);
    printf("%d ", x);
  }
  for(i = 0; i < d; i++)
    printf("%d ", a[i]);

  free(a);
  return 0;
}