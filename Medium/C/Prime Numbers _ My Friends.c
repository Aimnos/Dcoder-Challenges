#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
  int n, i, j, can = 0;
  scanf("%i", &n);
  if(n < 4 || n > 196) {
    printf("No");
    return 0;
  }
  for(i = 0; i < 25; i++) {
    if(i > n/2)
      break;

    for(j = i; j < 25; j++)
      if(primes[i] + primes[j] == n) {
        can = 1;
        printf("%i %i\n", primes[i], primes[j]);
      }

  }
  if(can == 0)
    printf("No");

  return 0;
}