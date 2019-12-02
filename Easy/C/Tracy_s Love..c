#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a + b == 6 || a - b == 6 || b - a == 6)
		printf("Love");
	else
		printf("Hate");
		
	return 0;
}
