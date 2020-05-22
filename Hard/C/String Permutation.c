#include <stdio.h>
#include <stdlib.h>

void sort(char *s, unsigned short int size) {
  while(size > 0) {
    char biggest = 0;
    for(unsigned short int i = 1; i < size; i++)
      if(s[i] > s[biggest])
        biggest = i;

    char aux = s[size - 1];
    s[size - 1] = s[biggest];
    s[biggest] = aux;
    size--;
  }
}

void permutate(char *s, unsigned short int size) {
  char *newS;
  newS = (char*)malloc(size*sizeof(char));
  permutateRecursive(s, size, newS, 0);
  free(newS);
}

void permutateRecursive(char *s, unsigned short int sSize, char *newS, unsigned short int newSize) {
  if(!sSize) {
    printf("%s ", newS);
    return;
  }
  for(unsigned short int i = 0; i < sSize; i++) {
    newS[newSize] = s[i];
    s[i] = s[sSize - 1];
    sort(s, sSize - 1);
    permutateRecursive(s, sSize - 1, newS, newSize + 1);
    s[sSize - 1] = newS[newSize];
    sort(s, sSize);
    while(s[i + 1] == s[i])
      i++;

  }
}

int main() {
  char string[21];
  unsigned short int size;
  scanf("%s", string);
  for(size = 0; size < 21; size++)
    if(!string[size])
      break;

  sort(string, size);
  permutate(string, size);
  return 0;
}