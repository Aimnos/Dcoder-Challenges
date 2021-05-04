#include <stdio.h>

int main() {
	unsigned char a, b;
	scanf("%hhu %hhu", &a, &b);
	printf("%hhu", a ^ b);
	return 0;
}