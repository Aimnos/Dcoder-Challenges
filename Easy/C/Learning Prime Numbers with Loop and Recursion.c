#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int m, n, i, j, isPrime;
	scanf("%d %d", &m, &n);
	for(i = m; i <= n; i++) {
		isPrime = 1;
		if(i > 1) {
			for(j = 2; j < i; j++)
				if(i%j == 0) {
					isPrime = 0;
					break;
				}
				
			if(isPrime == 1)
				printf("%d\n", i);

		}
	}
	return 0;
}