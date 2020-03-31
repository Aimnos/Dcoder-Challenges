#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
  unsigned short int N;
  char **files;
  scanf("%hu", &N);
  files = (char**)malloc(N*sizeof(char*));
  for(unsigned short int i = 0; i < N; i++) {
    files[i] = (char*)malloc(29*sizeof(char));
    scanf("%s", files[i]);
    unsigned short int pos = 0;
    bool hasAppend = false;
    for(unsigned short int j = 0; j < i; j++)
      if(strcmp(files[i], files[j]) == 0) {
        if(!hasAppend) {
          while(files[i][pos] != 0)
            pos++;

          files[i][pos++] = '(';
          files[i][pos] = '0';
          files[i][pos + 1] = ')';
          files[i][pos + 2] = 0;
          hasAppend = true;
        }
        files[i][pos]++;
        j = 0;
      }

    printf("%s ", files[i]);
  }
  for(unsigned short int i = 0; i < N; i++)
    free(files[i]);

  free(files);
  return 0;
}
