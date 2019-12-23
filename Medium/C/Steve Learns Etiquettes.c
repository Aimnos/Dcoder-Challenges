#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char string[100];
  int i;
  for(i = 0; i < 100; i++)
    string[i] = 0;

  scanf("%[^\n]", string);
  for(i = 0; i < 100; i++)
    if(string[i] == '?') {
      string[i] = ',';
      break;
    }

  printf("%s please?", string);
  return 0;
}