#include <stdio.h>

//Compiler version gcc  6.3.0

int factorial(int x) {
  if(x == 0)
    return 1;

  return x*factorial(x - 1);
}

int main() {
  unsigned long int n;
  int x[6], size, numbers, i, j;
  scanf("%lu", &n);
  for(size = 0; size < 6; size++) {
    if(n == 0)
      break;

    x[size] = n%10;
    n /= 10;
  }
  numbers = factorial(size) - 1;
  for(i = 0; i < size - 1; i++)
    for(j = i + 1; j < size; j++)
      if(x[i] < x[j])
        numbers--;

  printf("%d", numbers);
  return 0;
}