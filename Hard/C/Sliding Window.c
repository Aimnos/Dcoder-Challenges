#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int T, N, K, *trees, distinct, tree, i, j, k;
	bool seen[100];
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &N, &K);
		trees = (int *)malloc(N * sizeof (int));
		for(j = 0; j < N; j++)
			scanf("%d", &trees[j]);

		for(j = 0; j <= N - K; j++) {
			distinct = 0;
			for(k = 0; k < 100; k++)
				seen[k] = false;

			for(k = j; k < j + K; k++) {
				tree = trees[k] - 1;
				if(!seen[tree]) {
					seen[tree] = true;
					distinct++;
				}
			}
			if(j > 0)
				printf(" ");

			printf("%d", distinct);
		}
		printf("\n");
		free(trees);
	}
	return 0;
}