#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, k, i, j, highestPos;
  long int *a;
  scanf("%d %d", &n, &k);
  a = (long int*)malloc(n*sizeof(long int));
  for(i = 0; i < n; i++)
    scanf("%ld", &a[i]);

  for(i = 1; i < k; i++) {
    highestPos = 0;
    for(j = 1; j <= n - i; j++)
      if(a[j] > a[highestPos])
        highestPos = j;

    a[highestPos] = a[n - i];
  }
  highestPos = 0;
  for(i = 1; i <= n - k; i++)
    if(a[i] > a[highestPos])
      highestPos = i;

  printf("%ld", a[highestPos]);
  free(a);
  return 0;
}