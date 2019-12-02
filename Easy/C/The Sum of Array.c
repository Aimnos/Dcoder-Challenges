#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, x = 0, a, i;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &a);
		x += a;
	}
	printf("%d", x);
	return 0;
}