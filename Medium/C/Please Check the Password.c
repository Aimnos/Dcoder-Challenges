#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc 6.3.0

void reverse(char* s, unsigned int size) {
  char temp;
  unsigned int i, j;
  for(i = 0; i < size/2; i++) {
    j = size - i - 1;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}

unsigned int sizeOf(char* s, unsigned int maxSize) {
  unsigned int i;
  for(i = 0; i < maxSize; i++)
    if(s[i] == 0)
      return i;

  return i;
}

int main() {
  unsigned int N, i, j, size = 0, pos = 0;
  char **s;
  scanf("%d", &N);
  s = (char**)calloc(N, sizeof(char*));
  for(i = 0; i < N; i++) {
    s[i] = (char*)calloc(20, sizeof(char));
    scanf("%s", s[i]);
  }
  for(i = 0; i < N; i++) {
    for(j = i + 1; j < N; j++) {
      size = sizeOf(s[j], 20);
      if(strcmp(s[i], s[j]) == 0) {
        pos = size/2;
        break;
      }
      reverse(s[j], size);
      if(strcmp(s[i], s[j]) == 0) {
        pos = size/2;
        break;
      }
      pos = size;
    }
    if(pos == size/2)
      break;

  }
  if(i < N)
    printf("%d %c", size, s[i][pos]);

  for(i = 0; i < N; i++)
    free(s[i]);

  free(s);
  return 0;
}