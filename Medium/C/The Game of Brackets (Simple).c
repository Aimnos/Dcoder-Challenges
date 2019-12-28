#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char string[100];
  int i, left = 0, right = 0;
  for(i = 0; i < 100; i++)
    string[i] = 0;

  scanf("%s", string);
  for(i = 0; i < 100; i++) {
    if(string[i] == 0)
      break;

    if(string[i] == '(')
      left++;
    else if(string[i] == ')')
      right++;

  }
  if(left == right)
    printf("Yes");
  else
    printf("No");

  return 0;
}