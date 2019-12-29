#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char string[45];    //the longest english word is 45 letters long
  int i, over = 0;
  while(over == 0) {
    for(i = 0; i < 45; i++)
      string[i] = 0;

    scanf("%s", string);
    if(string[0] >= 'a' && string[0] <= 'z')
      string[0] -= 32;

    printf("%s ", string);
    for(i = 0; i < 45; i++) {
      if(string[i] == 0)
        break;

      if(string[i] == '.') {
        over = 1;
        break;
      }
    }
  }
  return 0;
}