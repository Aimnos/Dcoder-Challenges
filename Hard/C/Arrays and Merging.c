#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n, k, *array, i, j, smallest_pos, aux;
	scanf("%d", &m);
	array = (int *) malloc(m * sizeof (int));
	for(i = 0; i < m; i++)
		scanf("%d", &array[i]);

	scanf("%d", &n);
	array = (int *) realloc(array, (m + n) * sizeof (int));
	for(i = 0; i < n; i++)
		scanf("%d", &array[i + m]);

	scanf("%d", &k);
	for(i = 0; i < k; i++) {
		smallest_pos = i;
		for(j = i + 1; j < m + n; j++)
			if(array[j] < array[smallest_pos])
				smallest_pos = j;

		aux = array[i];
		array[i] = array[smallest_pos];
		array[smallest_pos] = aux;
	}
	printf("%d", array[k - 1]);
	free(array);
	return 0;
}