#include <stdio.h>

int main() {
	unsigned char D, X, Y;
	scanf("%hhu %hhu %hhu", &D, &X, &Y);
	if(X == Y)
		printf("Draw");
	else if(X > Y)
		printf("Alex");
	else
		printf("Ryan");

	return 0;
}