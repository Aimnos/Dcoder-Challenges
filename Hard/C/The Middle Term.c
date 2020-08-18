#include <stdio.h>
#include <stdlib.h>

int main() {
	int T, N, *array, i, j, k, left, right;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		array = (int *)malloc(N * sizeof (int));
		for(j = 0; j < N; j++)
			scanf("%d", &array[j]);

		for(j = 1; j < N - 1; j++) {
			left = 0;
			right = 0;
			for(k = 0; k < j; k++)
				left += array[k];

			for(k = j + 1; k < N; k++)
				right += array[k];

			if(left == right)
				break;

		}
		if(left == right)
			printf("Yes\n");
		else
			printf("No\n");

		free(array);
	}
	return 0;
}