#include <stdio.h>

//Compiler version gcc  6.3.0

int gcd(int a, int b) {
  int aux;
  if(b > a) {
      aux = a;
      a = b;
      b = aux;
  }
  while(b != 0) {
      aux = a%b;
      a = b;
      b = aux;
  }
  return a;
}

int main() {
  int a, b, i, x = 1;
  scanf("%d %d", &a, &b);
  for(i = b; i >= a; i--) {
    if(x%i != 0)
      x *= i/gcd(x, i);

  }
  printf("%d", x);
  return 0;
}