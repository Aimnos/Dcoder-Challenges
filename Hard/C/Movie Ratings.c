#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int N;
  short int n;
  float *r;
  char **list;
  scanf("%hu %hi", &N, &n);
  r = (float*)malloc(N*sizeof(float));
  list = (char**)malloc(N*sizeof(char*));
  for(unsigned short int i = 0; i < N; i++) {
    list[i] = (char*)malloc(101*sizeof(char));
    scanf(" %[^\n]", list[i]);
    for(unsigned short int j = 0; j < 101; j++)
      if(!list[i][j]) {
        r[i] = list[i][j - 3] - '0' + (float)(list[i][j - 1] - '0')/10;
        if(!r[i])
          r[i] = 10;

        list[i][j - 4] = 0;
        break;
      }

  }
  if(n == 1) {
    for(unsigned short int i = 0; i < N; i++) {
      unsigned short int biggest = 0;
      for(unsigned short int j = 1; j < N; j++)
        if(r[j] > r[biggest])
        biggest = j;

      printf("%s %.1f\n", list[biggest], r[biggest]);
      free(list[biggest]);
      r[biggest] = 0;
    }
  } else {
    for(unsigned short int i = 0; i < N; i++) {
      unsigned short int smallest = 0;
      for(unsigned short int j = 1; j < N; j++)
        if(r[j] < r[smallest])
        smallest = j;

      printf("%s %.1f\n", list[smallest], r[smallest]);
      free(list[smallest]);
      r[smallest] = 11;
    }
  }
  free(r);
  free(list);
  return 0;
}