#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int n, S, prev = -101, increasing = 0, can = 1, i;
  scanf("%i", &n);
  for(i = 0; i < n; i++) {
    scanf("%i", &S);
    if(increasing == 0) {
      if(S >= prev && i > 0)
          increasing = 1;

    } else {
      if(S <= prev) {
        can = 0;
        break;
      }
    }
    prev = S;
  }
  if(can == 0)
    printf("No");
  else
    printf("Yes");

  return 0;
}