#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char b[50];
  int i, m = 1, x = 0;
  for(i = 0; i < 50; i++)
    b[i] = 0;

  scanf("%s", b);
  for(i = 0; i < 50; i++)
    if(b[i] == 0)
      break;

  while(i > 0) {
    x += (b[--i] - '0')*m;
    m *= 2;
  }
  printf("%d", m - x);
  return 0;
}