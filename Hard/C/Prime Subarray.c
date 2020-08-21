#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int x) {
	int i;
	if(x < 2)
		return false;

	for(i = 2; i < x; i++)
		if(x % i == 0)
			return false;

	return true;
}

int main() {
	int T, N, *A, i, j, streak, best;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		A = (int *)malloc(N * sizeof (int));
		for(j = 0; j < N; j++)
			scanf("%d", &A[j]);

		best = 0;
		streak = 0;
		for(j = 0; j < N; j++) {
			if(isPrime(A[j]))
				streak++;
			else {
				if(streak > best)
					best = streak;

				streak = 0;
			}
		}
		if(best == 0)
			printf("-1\n");
		else if(streak > best)
			printf("%d\n", streak);
		else
			printf("%d\n", best);

		free(A);
	}
	return 0;
}