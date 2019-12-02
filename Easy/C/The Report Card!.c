#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int a, b, c, x;
	scanf("%d %d %d", &a, &b, &c);
	x = (a + b + c)/3;
	if(x > 90)
		printf("A");
	else if(x > 80)
		printf("B");
	else if(x > 70)
		printf("C");
	else if(x > 60)
		printf("D");
	else
		printf("F");
		
	return 0;
}