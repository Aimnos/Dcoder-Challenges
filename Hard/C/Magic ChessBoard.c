#include <stdio.h>

int main() {
	unsigned char T, N;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%hhu", &N);
		printf("%u\n", N * (N + 1) * (2 * N + 1) / 6);
	}
	return 0;
}