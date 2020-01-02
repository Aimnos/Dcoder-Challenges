#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char a[33], b[33];    //TestCase#0 has a string with 32 characters
  int sizeA, sizeB, i, j, match;
  scanf("%s\n%s", a, b);
  for(sizeA = 0; sizeA < 33; sizeA++)
    if(a[sizeA] == 0)
      break;

  for(sizeB = 0; sizeB < 33; sizeB++)
    if(b[sizeB] == 0)
      break;

  for(i = 0; i < sizeA; i++) {
    match = 0;
    for(j = 0; j < sizeB; j++)
      if(a[i] == b[j]) {
        a[i] = a[--sizeA];
        b[j] = b[--sizeB];
        match = 1;
        break;
      }

    if(match == 0) {
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}