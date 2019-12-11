#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, A[1000], i, j, isprime, cont = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &A[i]);

	for(i = 0; i < N; i++) {
		isprime = 1;
		if(A[i] >= 2)
			for(j = 2; j <= A[i]/2; j++) {
				if(A[i]%j == 0) {
					isprime = 0;
					break;
				}
			}
		else
			isprime = 0;

		if(isprime == 1)
			cont++;
			
	}
	printf("%d", cont);
	return 0;
}
