#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int t, i;
  long int n, x, y, a;
  scanf("%i", &t);
  for(i = 0; i < t; i++) {
    scanf("%li %li %li", &n, &x, &y);
    printf("%li", x);
    a = 2*x;
    while(a < n) {
      if(a%y != 0)
        printf(" %li", a);

      a += x;
    }
    printf("\n");
  }
  return 0;
}