#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, i;
	scanf("%d", &n);
	for(i = n; i > 1; i--)
		n += i - 1;
		
	printf("%d", n);
	return 0;
}