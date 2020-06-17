#include <stdio.h>

int main() {
	int T, N;
	long int squares;
	scanf("%d", &T);
	for(int i = 0; i < T; i++) {
		squares = 0;
		scanf("%d", &N);
		for(int j = 1; j <= N; j++)
			squares += j*j;

		printf("%ld\n", squares);
	}
	return 0;
}