#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	scanf("%d %d %d", &a, &b, &c);
	if(d == a + b + c)
		printf("None 0");
	else if(d > a + b + c)
		printf("Garry %d", d - a - b - c);
	else
		printf("Sharry %d", a + b + c - d);
		
	return 0;
}