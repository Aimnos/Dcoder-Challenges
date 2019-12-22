#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char string[10];
  int i, size, x = 0, m = 1, isPrime = 1;
  for(i = 0; i < 10; i++)
    string[i] = 0;

  scanf("%s", string);
  for(size = 0; size < 10; size++)
    if(string[size] == 0)
      break;

  for(i = size - 1; i >= 0; i--) {
    x += (string[i] - '0')*m;
    m *= 2;
  }
  printf("%d\n", x);
  for(i = 2; i <= x/2; i++)
    if(x%i == 0) {
      isPrime = 0;
      break;
    }

  if(isPrime == 1)
    printf("Prime");
  else
    printf("Not Prime");

  return 0;
}