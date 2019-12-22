#include <stdio.h>

//Compiler version gcc  6.3.0

unsigned long int L(int x) {
  switch(x) {
    case 0:
      return 2;
    case 1:
      return 1;
    default:
      return L(x - 1) + L(x - 2);
  }
}

int main() {
  unsigned long int N, x = 2;
  int i = 1;
  scanf("%lu", &N);
  if(N == 0)
    printf("1");
  else {
    while(x <= N)
      x = L(++i);

    printf("%lu", L(i));
  }
  return 0;
}