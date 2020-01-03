#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int t, k, i, j;
  char s[201];
  scanf("%i", &t);
  for(i = 0; i < t; i++) {
    scanf("%s", s);
    for(k = 0; k < 201; k++)
      if(s[k] == 0) {
        k /= 2;
        break;
      }

    for(j = 0; j < k; j += 2)
      printf("%c", s[j]);

    printf("\n");
  }
  return 0;
}