#include <stdio.h>

int main() {
	unsigned char n;
	scanf("%hhu", &n);
	printf("%hu", n * (n - 1));
	return 0;
}