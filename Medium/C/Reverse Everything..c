#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, *a, i;
  scanf("%d", &n);
  a = (int*)malloc(n*sizeof(int));
  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for(i = n - 1; i >= 0; i--)
    printf("%d ", a[i]);

  free(a);
  return 0;
}