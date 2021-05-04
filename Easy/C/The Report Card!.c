#include <stdio.h>

int main() {
	unsigned char a, b, c;
	scanf("%hhu %hhu %hhu", &a, &b, &c);
	unsigned char x = (a + b + c) / 3;
	if(x > 90)
		printf("A");
	else if(x > 80)
		printf("B");
	else if(x > 70)
		printf("C");
	else if(x > 60)
		printf("D");
	else
		printf("F");

	return 0;
}