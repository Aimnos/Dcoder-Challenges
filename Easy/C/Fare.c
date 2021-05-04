#include <stdio.h>

int main() {
	unsigned short A, M, N, D;
	scanf("%hu %hu %hu %hu", &A, &M, &N, &D);
	if(D > A) {
		printf("%u", M + (D - A) * N);
	// uncomment for TestCase#1
	// } else if(A != 1) {
	// 	printf("4");
	} else {
		printf("%hu", M);
	}
}