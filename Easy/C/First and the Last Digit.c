#include <stdio.h>

int main() {
	unsigned char T, last;
	unsigned int N;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%u", &N);
		last = N%10;
		while(N > 10)
			N /= 10;

		printf("%hhu\n", N + last);
	}
	return 0;
}