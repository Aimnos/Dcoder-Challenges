#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  long long int n, cont = 0, prev;
  scanf("%lli", &n);
  prev = n%2;
  while(n > 0) {
    if(n%2 == prev)
      cont++;
    else
      cont = 1;

    if(cont > 5)
      break;

    prev = n%2;
    n /= 2;
  }
  if(cont > 5)
    printf("Bad");
  else
    printf("Good");

  return 0;
}