#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char s[6];    //TestCase#2 has a string with 5 characters
  int i;
  scanf("%s", s);
  if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
    printf("%sway", s);
  else {
    for(i = 1; i < 6; i++) {
      if(s[i] == 0)
        break;

      printf("%c", s[i]);
    }
    printf("%cay", s[0]);
  }
  return 0;
}