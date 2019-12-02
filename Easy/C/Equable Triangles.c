#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
	int n, i;
	double a, b, c, cos, sin;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%lf %lf %lf", &a, &b, &c);
		cos = (b*b + c*c - a*a)/(2*b*c);
		sin = sqrt(1 - cos*cos);
		if(a + b + c > b*c*sin/2 - 1E-13 && a + b + c < b*c*sin/2 + 1E-13)
			printf("True\n");
		else
			printf("False\n");

	}
	return 0;
}