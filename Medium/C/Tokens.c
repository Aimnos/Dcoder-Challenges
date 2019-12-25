#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, i, j, hasNumber, hasChar;
  char *S;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    hasNumber = 0;
    hasChar = 0;
    scanf("%d", &N);
    S = (char*)malloc(N*sizeof(char));
    for(j = 0; j < N; j++)
      scanf(" %c", &S[j]);

    for(j = 0; j < N; j++) {
      if((S[j] >= 'a' && S[j] <= 'z') || (S[j] >= 'A' && S[j] <= 'Z'))
        hasChar = 1;

      if(S[j] >= '0' && S[j] <= '9')
        hasNumber = 1;

    }
    if(hasNumber == 1) {
      if(hasChar == 1)
        printf("Variable\n");
      else
        printf("Number\n");

    } else if(hasChar == 1)
      printf("String\n");

    free(S);
  }
  return 0;
}