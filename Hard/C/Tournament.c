#include <stdio.h>

int combination_2(int n) {
	return n * (n - 1) / 2;
}

int main() {
	int T, N, M, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		printf("%d\n", combination_2(N)*M);
	}
	return 0;
}