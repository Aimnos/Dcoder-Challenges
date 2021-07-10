#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int N, K, *Arr;
	scanf("%u %u", &N, &K);
	Arr = (unsigned int *) malloc(N * sizeof (int));
	for(unsigned int i = 0; i < N; i++)
		scanf("%u", &Arr[i]);

	printf("%u", Arr[N - K]);
	for(unsigned int i = 1; i < N; i++)
		printf(" %u", Arr[(N - K + i) % N]);

	free(Arr);
	return 0;
}