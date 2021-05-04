#include <stdio.h>

int main() {
	unsigned char a, b;
	// TestCase#3 has an ansewr bigger than 65535
	unsigned int sum;
	scanf("%hhu %hhu", &a, &b);
	for(unsigned char x = a; x <= b; x++)
		sum += x * x;

	printf("%u", sum);
	return 0;
}