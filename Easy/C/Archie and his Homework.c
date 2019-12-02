#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, D, i;
	scanf("%d %d", &N, &D);
	for (i = 2; i <= N; i++)
		while(N%i == 0 && D%i == 0) {
			N /= i;
			D /= i;
		}
		
	printf("%d %d", N, D);
	return 0;
}