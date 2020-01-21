#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int n, k, *x, destroyed = 0, bombs = 0, highest, i, y;
  scanf("%i %i", &n, &k);
  x = (int*)malloc(n*sizeof(int));
  for(i = 0; i < n; i++)
    scanf("%i", &x[i]);

  while(destroyed < n) {
    bombs++;
    highest = x[0];
    for(i = 1; i < n; i++)
      if(x[i] > highest)
        highest = x[i];

    for(i = 0; i < n; i++)
      if(x[i] > 0 && x[i] + 2*k >= highest) {
        x[i] = 0;
        destroyed++;
      }

  }
  printf("%i", bombs);
  free(x);
  return 0;
}