#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char S[100];
  int i, size = -1, punctuation = 0, pos = 0, maxSize = 0, maxPunctuation, maxPos;
  for(i = 0; i < 100; i++)
    S[i] = 0;

  scanf("%[^\n]", S);
  for(i = 0; i < 100; i++) {
    if(S[i] == 0) {
      if(size > maxSize) {
        maxSize = size;
        maxPunctuation = punctuation;
        maxPos = pos;
      }
    }
    if((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z')) {
      if(size == -2) {
        maxPunctuation = punctuation;
        size = -1;
      }
      if(size == -1) {
        size = 1;
        punctuation = 0;
        pos = i;
      } else
        size++;

    } else if(S[i] == ' ') {
      if(size > maxSize) {
        maxSize = size;
        maxPunctuation = punctuation;
        maxPos = pos;
      }
      size = -1;
      punctuation = 0;
    } else {
      if(size > maxSize) {
        maxSize = size;
        maxPos = pos;
        size = -2;
      }
      punctuation++;
    }
  }
  for(i = maxPos; i < maxPos + maxSize + maxPunctuation; i++)
    printf("%c", S[i]);

  return 0;
}