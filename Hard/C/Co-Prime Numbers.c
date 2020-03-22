#include <stdio.h>
#include <stdbool.h>

bool areCoprime(int a, int b) {
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
  return a == 1;
}

int main() {
  unsigned short int X, N, A, lands = 0;
  scanf("%hu\n%hu", &X, &N);
  for(unsigned short int i = 0; i < N; i++) {
    scanf("%hu", &A);
    if(areCoprime(X, A))
      lands++;

  }
  printf("%hu", lands);
  return 0;
}