#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int N, size, *sizes, pairs = 0;
  char *sides;
  scanf("%hu", &N);
  sizes = (unsigned short int*)malloc(N*sizeof(short int));
  sides = (char*)malloc(N*sizeof(char));
  for(unsigned short int i = 0; i < N; i++)
    scanf("%hu %c", &sizes[i], &sides[i]);

  while(N > 0) {
    for(unsigned short int i = 0; i < N - 1; i++)
      if(sizes[N - 1] == sizes[i] && sides[N - 1] != sides[i]) {
        pairs++;
        sizes[i] = sizes[N - 2];
        sides[i] = sides[N - 2];
        N--;
        break;
      }

    N--;
  }
  printf("%hu", pairs);
  free(sizes);
  free(sides);
  return 0;
}