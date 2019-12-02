#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	double r;
	scanf("%lf", &r);
	if(r > 0)
		printf("%.2lf", 3.14*r*r);
	else
		printf("0");
		
	return 0;
}