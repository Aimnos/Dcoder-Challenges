#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Compiler version gcc  6.3.0

int main() {
  int N, *frequency, i, j, appeared, highestPos;
  char **word;
  scanf("%d", &N);
  frequency = (int*)calloc(N, sizeof(int));
  word = (char**)malloc(N*sizeof(char*));
  for(i = 0; i < N; i++)
    word[i] = (char*)calloc(40, sizeof(char));

  for(i = 0; i < N; i++)
    scanf("%s", word[i]);

  for(i = 0; i < N; i++) {
    appeared = 0;
    for(j = 0; j < i; j++)
      if(strcmp(word[j], word[i]) == 0) {
        appeared = 1;
        frequency[j]++;
        break;
      }

    if(appeared == 0)
      frequency[i]++;

  }
  for(i = 0; i < N; i++) {
    highestPos = 0;
    for(j = 1; j < N; j++)
      if(frequency[j] > frequency[highestPos])
        highestPos = j;

    if(frequency[highestPos] == 0)
      break;

    printf("%s ", word[highestPos]);
    frequency[highestPos] = 0;
  }
  for(i = 0; i < N; i++)
    free(word[i]);

  free(frequency);
  free(word);
  return 0;
}