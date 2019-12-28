#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, k, *a, canSum = 0, i, j;
  scanf("%d %d", &n, &k);
  a = (int*)malloc(n*sizeof(int));
  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for(i = 0; i < n; i++) {
    for(j = i; j < n; j++)
      if(a[i] + a[j] == k) {
        canSum = 1;
        break;
      }

    if(canSum == 1)
      break;

  }
  if(canSum == 1)
    printf("Yes");
  else
    printf("No");

  free(a);
  return 0;
}