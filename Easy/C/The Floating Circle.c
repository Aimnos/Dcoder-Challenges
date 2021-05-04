#include <stdio.h>

int main() {
	float r;
	scanf("%f", &r);
	printf("%.2f", 3.14 * r * r * (r > 0));
	return 0;
}