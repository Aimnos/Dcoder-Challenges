#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int x, y, i, p;
	scanf("%d", &x);
	for(i = 1, p = 1; i <= x; i *= 10, p *= 2)
		y += p*((x/i)%10);
		
	printf("%d", y);
	return 0;
}