#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *a, i, j;
  scanf("%d", &N);
  a = (int*)malloc(N*sizeof(int));
  for(i = 0; i < N; i++)
    scanf("%d", &a[i]);

  for(i = 0; i < N; i++) {
    if(a[i] != 0)
      for(j = i + 1; j < N; j++)
        if(a[i] == a[j]) {
          a[i] = 0;
          a[j] = 0;
          break;
        }

    if(a[i] != 0) {
      printf("%d", a[i]);
      break;
    }
  }
  free(a);
  return 0;
}