#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int D, i;
  char string[50];
  for(i = 0; i < 50; i++)
    string[i] = 0;

  scanf("%s\n%d", string, &D);
  for(i = 0; i < 50; i++) {
    if(string[i] == 0)
      break;

    string[i] -= D;
    while(string[i] < 'a')
      string[i] += 26;

  }
  printf("%s", string);
  return 0;
}