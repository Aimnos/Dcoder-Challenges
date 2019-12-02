#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int a, b, i, x = 0;
	scanf("%d %d", &a, &b);
	for(i = a; i <= b; i++)
		x += i*i;
		
	printf("%d", x);
	return 0;
}