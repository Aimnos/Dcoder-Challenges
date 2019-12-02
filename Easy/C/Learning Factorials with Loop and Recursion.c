#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, x = 1, i;
	scanf("%d", &n);
	for(i = 2; i <= n; i++)
		x *= i;
	
	printf("%d", x);
	return 0;
}