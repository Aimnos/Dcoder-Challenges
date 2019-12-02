#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, i, x = 0;
	scanf("%d", &n);
	for(i = 1; i <=n; i *= 10) {
		x *= 10;
		x += (n/i)%10;
	}
	printf("%d", x);
	return 0;
}