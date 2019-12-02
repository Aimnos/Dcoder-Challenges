#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, A[50], i, key = 0, j;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if(A[i] > A[key])
			key = i;

	}
	for(i = 0; i < N; i++) {
		if(A[key] > A[i]) {
			A[key] += A[i];
			A[i] = A[key] - A[i];
			A[key] -= A[i];
		}
		key = i + 1;
		for(j = i + 1; j < N; j++)
			if(A[j] > A[key])
				key = j;
				
		printf("%d ", A[i]);
	}
	return 0;
}