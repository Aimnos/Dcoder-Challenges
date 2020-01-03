#include  <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int M, n;
  long int x, y = 1;
  scanf("%i %i", &M, &n);
  if(n == 0)
    printf("1");
  else {
    x = M;
    while(n > 1) {
      if(n%2 == 1) {
        n -= 1;
        y *= x;
      }
      n /= 2;
      x *= x;
    }
    printf("%li", x*y);
  }
  return 0;
}