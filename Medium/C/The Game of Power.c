#include <stdio.h>

//Compiler version gcc  6.3.0

int power(int b, int e) {
  int x = b, y = 1;
  if(e == 0)
    return 1;

  while(e > 1) {
    if(e%2 == 0) {
      e /= 2;
      x *= x;
    } else {
      e -= 1;
      y *= x;
    }
  }
  return x*y;
}

int main() {
  int T, N, i, b, e, p, lowest;
  scanf("%i", &T);
  for(i = 0; i < T; i++) {
    scanf("%i", &N);
    p = 1;
    b = 2;
    e = 2;
    lowest = N - 1;
    while(p < N) {
      if(N - p < lowest)
        lowest = N - p;

      while(p < N) {
        if(N - p < lowest)
          lowest = N - p;

        p = power(b, e++);
      }
      if(p - N < lowest)
        lowest = p - N;

      e = 2;
      p = power(++b, e);
    }
    if(p - N < lowest)
      lowest = p - N;

    printf("%i\n", lowest);
  }
  return 0;
}