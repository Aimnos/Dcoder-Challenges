#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, i;
	scanf("%d", &n);
	for(i = 1; i <= 10; i++)
		printf("%d\n", i*n);
		
	return 0;
}