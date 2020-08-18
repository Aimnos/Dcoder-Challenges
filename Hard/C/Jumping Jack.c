#include <stdio.h>
#include <stdlib.h>

int main() {
	int T, N, *H, K, i, j, k;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		H = (int *)malloc(N * sizeof (int));
		for(j = 0; j < N; j++)
			scanf("%d", &H[j]);

		for(j = 0; j < N; j++) {
			K = 0;
			for(k = j - 1; k >= 0; k--) {
				if(H[k] > H[j])
					break;

				K++;
			}
			if(j > 0)
				printf(" ");

			printf("%d", K);
		}
		free(H);
	}
	return 0;
}