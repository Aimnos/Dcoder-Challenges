#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, i, *a, x, y, j;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%d", &N);
    a = (int*)malloc(N*sizeof(int));
    x = 0;
    y = 0;
    for(j = 0; j < N; j++)
      scanf("%d", &a[j]);

    for(j = 0; j < N; j++) {
      if(j%2 == 0)
        x += a[j];
      else
        y += a[j];

    }
    if(x >= y)
      printf("%d\n", x);
    else
      printf("%d\n", y);

    free(a);
  }
  return 0;
}