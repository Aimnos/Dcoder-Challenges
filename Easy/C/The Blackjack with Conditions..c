#include <stdio.h>

int main() {
	unsigned char a, b;
	scanf("%hhu %hhu", &a, &b);
	if(a + b > 21) {
		if(a == 11 || b == 11)
			printf("%hhu", a + b - 10);
		else
			printf("0");

	} else
		printf("%hhu", a + b);

	return 0;
}