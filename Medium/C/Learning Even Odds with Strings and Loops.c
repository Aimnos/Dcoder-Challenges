#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int t, size, i, j;
  char str[21];
  scanf("%i", &t);
  for(i = 0; i < t; i++) {
    scanf("%s", str);
    for(size = 0; size < 21; size++)
      if(str[size] == 0)
        break;

    for(j = 0; j < size; j += 2)
      printf("%c", str[j]);

    printf(" ");
    for(j = 1; j < size; j += 2)
      printf("%c", str[j]);

    printf("\n");
  }
  return 0;
}