#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int x;
	double y;
	scanf("%lf", &y);
	x = (int) y;
	if (x == y)
		printf("%d %d", x, x);
	else
		printf("%d %d", x + 1, x);
		
	return 0;
}