#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, A, i, biggest = 0, sum = 0;
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		scanf("%d", &A);
		sum += A;
		if(A > biggest)
			biggest = A;
			
	}
	printf("%d", sum%biggest);
	return 0;
}