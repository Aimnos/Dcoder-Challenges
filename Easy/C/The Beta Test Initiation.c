#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	double V, X;
	scanf("%lf %lf", &V, &X);
	if(X >= V)
		printf("Yes");
	else
		printf("No");
		
	return 0;
}