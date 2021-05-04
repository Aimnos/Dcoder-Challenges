#include <stdio.h>

int main() {
	unsigned short n;
	scanf("%hu", &n);
	for(unsigned char i = 1; i <= 10; i++)
		printf("%u\n", n * i);

	return 0;
}