#include <stdio.h>

int main() {
	unsigned char N;
	scanf("%hhu", &N);
	for(unsigned char i = 1; i <= N; i++) {
		for (unsigned char j = 1; j < i; j++)
			printf("%hhu ", j);

		printf("%hhu\n", i);
	}
	return 0;
}