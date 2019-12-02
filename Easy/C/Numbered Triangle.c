#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i, j;
	scanf("%d", &N);
	for(i = 1; i < N; i++) {
		printf("1");
		for (j = 2; j <= i; j++)
			printf(" %d", j);

		printf("\n");
	}
	printf("1");
	for (j = 2; j <= i; j++)
		printf(" %d", j);
		
	return 0;
}