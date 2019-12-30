#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int happy = 0, sad = 0, i;
  char string[100];
  for(i = 0; i < 100; i++)
    string[i] = 0;

  scanf("%s", string);
  for(i = 0; i < 100; i++) {
    if(string[i] == 0)
      break;

    if(string[i] == '^' && string[i + 1] == '_' && string[i + 2] == '^')
      happy++;
    else if(string[i] == '-' && string[i + 1] == '_' && string[i + 2] == '-')
      sad++;

  }
  if(happy > sad)
    printf("Cody is happy with Dcoder");
  else if(sad > happy)
    printf("Cody wants to leave job");
  else
    printf("Cody doesn't know what to do");

  return 0;
}