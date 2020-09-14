#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char N;
	scanf("%hhu", &N);
	unsigned short *A = (unsigned short *) malloc(N * sizeof (short));
	for(unsigned char i = 0; i < N; i++)
		scanf("%hu", &A[i]);

	for(unsigned char i = N; i > 0; i--)
		printf("%hu ", A[i - 1]);

	free(A);
	return 0;
}