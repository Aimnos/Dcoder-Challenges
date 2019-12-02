#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
	short int a, b;
	scanf("%d %d", &a, &b);
	if(abs(a - b) == 1)
		printf("1");
	else
		printf("0");
		
	return 0;
}