#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, *a, i, j;
  scanf("%d", &n);
  a = (int*)malloc(n*sizeof(int));
  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for(i = 0; i < n; i++) {
    if(a[i] != 0)
      for(j = i + 1; j < n; j++)
        if(a[i] == a[j]) {
          a[i] = -1;
          a[j] = -1;
          break;
        }

    if(a[i] != -1) {
      printf("%d", a[i]);
      break;
    }
  }
  free(a);
  return 0;
}