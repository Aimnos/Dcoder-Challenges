#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char string[21];
  int n, i, j, hasUpper, hasLower, hasNumber;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    hasUpper = 0;
    hasLower = 0;
    hasNumber = 0;
    for(j = 0; j < 21; j++)
      string[j] = 0;

    scanf("%21s", string);
    for(j = 0; j < 21; j++) {
      if(string[j] == 0)
        break;

      if(string[j] >= 'A' && string[j] <= 'Z')
        hasUpper = 1;
      else if(string[j] >= 'a' && string[j] <= 'z')
        hasLower = 1;
      else if(string[j] >= '0' && string[j] <= '9')
        hasNumber = 1;

    }
    if(j > 5 && j < 21 && hasUpper == 1 && hasLower == 1 && hasNumber == 1)
      printf("True\n");
    else
      printf("False\n");

  }
  return 0;
}