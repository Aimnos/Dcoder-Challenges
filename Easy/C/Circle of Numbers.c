#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, X;
	scanf("%d %d", &N, &X);
	printf("%d", (X + N/2)%N);
	return 0;
}