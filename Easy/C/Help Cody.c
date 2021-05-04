#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char N;
	scanf("%hhu", &N);
	signed short *A = (signed short *) malloc(N * sizeof (short));
	unsigned char biggest_pos = 0;
	for(unsigned char i = 0; i < N; i++) {
		scanf("%hd", &A[i]);
		if(A[i] > A[biggest_pos])
			biggest_pos = i;

	}
	printf("%hd", A[biggest_pos]);
	A[biggest_pos] = A[0];
	for(unsigned char i = N; i > 1; i--) {
		biggest_pos = 1;
		for(unsigned char j = 2; j < i; j++)
			if(A[j] > A[biggest_pos])
				biggest_pos = j;

		printf(" %hd", A[biggest_pos]);
		A[biggest_pos] = A[i - 1];
	}
	free(A);
	return 0;
}