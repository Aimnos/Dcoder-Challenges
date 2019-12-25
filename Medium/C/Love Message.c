#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, i, j, x;
  char S[1000];
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    x = 0;
    for(j = 0; j < 1000; j++)
      S[j] = 0;

    scanf("%s", S);
    for(j = 0; j < 1000; j++) {
      if(S[j] == 0)
        break;

      x += S[j] - 'a' + 1;
    }
    printf("%d\n", x);
  }
  return 0;
}