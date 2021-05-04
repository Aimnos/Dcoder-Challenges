#include <stdio.h>

int main() {
	unsigned short x;
	scanf("%hu", &x);
	printf("%hu", x % 7);
	return 0;
}