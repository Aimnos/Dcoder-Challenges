#include <stdio.h>

int main() {
	int T, N, A, i, j, xor;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		xor = 0;
		scanf("%d", &N);
		for(j = 0; j < N; j++) {
			scanf("%d", &A);
			xor ^= A;
		}
		if((N % 2 == 0) || (xor == 0))
			printf("Sherlock\n");
		else
			printf("Watson\n");

	}
	return 0;
}