#include <stdio.h>

int main() {
	unsigned short number1, number2;
	scanf("%hu %hu", &number1, &number2);
	printf("%hu", number1 + number2);
	return 0;
}