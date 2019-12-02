#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, i;
	long long x;
	double y;
	scanf("%d", &n);
	if(n >= 0) {
		printf("1");
		for(i = 0, x = 2; i < n; i++, x *= 2)
			printf(",%d", x);

	} else {
		printf("1.0");
		for(i = 0, y = 0.5; i > n; i--, y /= 2)
			printf(",%.*f", -i + 1, y);
			
	}
	return 0;
}