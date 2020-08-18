#include <stdio.h>

int main() {
	int T, X, Y, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &X, &Y);
		X = X * (X - 1) / 2;
		Y = Y * (Y - 1) / 2;
		printf("%d\n", X*Y);
	}
	return 0;
}