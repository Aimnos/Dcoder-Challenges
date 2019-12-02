#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int D, X, Y;
	scanf("%d %d %d", &D, &X, &Y);
	if(X == Y)
		printf("Draw");
	else if(X > Y)
		printf("Alex");
	else
		printf("Ryan");
		
	return 0;
}