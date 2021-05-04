#include <stdio.h>

int main() {
	unsigned short N;
	scanf("%hu", &N);
	printf("%u", N * (N + 1) / 2);
	return 0;
}