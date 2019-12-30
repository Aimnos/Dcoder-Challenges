#include <stdio.h>
#include <string.h>

//Compiler version gcc  6.3.0

int main() {
  int n, isValid, happy = 0, i, j;
  char string[20];
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    isValid = 1;
    for(j = 0; j < 20; j++)
      string[j] = 0;

    scanf("%s", string);
    for(j = 0; j < 20; j++) {
      if(string[j] == 0)
        break;

      if((string[j] >= 'a' && string[j] <= 'z') || (string[j] >= 'A' && string[j] <= 'Z'))
        if(string[j - 1] != '^' || string[j + 1] != '^') {
          isValid = 0;
          break;
        }

    }
    if(isValid == 1)
      happy++;

  }
  printf("%d", happy);
  return 0;
}