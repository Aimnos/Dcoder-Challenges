#include <stdio.h>
#include <stdlib.h>

int *longest_increasing_subsequence(int *v, int size, int *sub_size) {
	int i, lower, upper, mid, *subsequence;
	int *indexes = (int *) malloc(size * sizeof (int));
	int *prev = (int *) malloc(size * sizeof (int));
	for(i = size - 1; i >= 0; i--) {
		lower = 0;
		upper = *sub_size;
		while(lower < upper) {
			mid = (lower + upper) / 2;
			if(v[indexes[mid]] < v[i])
				upper = mid;
			else
				lower = mid + 1;

		}
		if(lower > 0)
			prev[i] = indexes[lower - 1];
		else
			prev[i] = 0;

		if(lower < (*sub_size))
			indexes[lower] = i;
		else
			indexes[(*sub_size)++] = i;

	}
	subsequence = (int *) malloc((*sub_size) * sizeof (int));
	lower = indexes[(*sub_size) - 1];
	for(i = 0; i < (*sub_size); i++) {
		subsequence[i] = v[lower];
		lower = prev[lower];
	}
	free(indexes);
	free(prev);
	return subsequence;
}

int main() {
	int n, *sequence, *subsequence, i, size = 0;
	scanf("%d", &n);
	sequence = (int *) malloc(n * sizeof (int));
	for(i = 0; i < n; i++)
		scanf("%d", &sequence[i]);

	subsequence = longest_increasing_subsequence(sequence, n, &size);
	for(i = 0; i < size; i++) {
		if(i > 0)
			printf(" ");

		printf("%d", subsequence[i]);
	}
	free(sequence);
	free(subsequence);
	return 0;
}