#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, i, sizeN, sizeF, j, k, isSubstring;
  char N[100], F[100];
  for(i = 0; i < 100; i++) {
    N[i] = 0;
    F[i] = 0;
  }
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%s %s", N, F);
    for(sizeN = 0; sizeN < 100; sizeN++)
      if(N[sizeN] == 0)
        break;

    for(sizeF = 0; sizeF < 100; sizeF++)
      if(F[sizeF] == 0)
        break;

    for(j = 0; j <= sizeN - sizeF; j++)
      if(N[j] == F[0]) {
        isSubstring = 1;
        for(k = j; k < j + sizeF; k++)
          if(N[k] != F[k - j]) {
            isSubstring = 0;
            break;
          }

      }

    if(isSubstring == 1)
      printf("Yes\n");
    else
      printf("No\n");

  }
  return 0;
}