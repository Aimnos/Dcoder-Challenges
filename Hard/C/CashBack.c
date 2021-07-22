#include <stdio.h>

int main() {
	unsigned int N, Ci, lowest, highest;
	unsigned long int M, Xi;
	scanf("%u", &N);
	scanf("%u %u", &highest, &lowest);
	M = highest - lowest;
	for(unsigned int i = 1; i < N; i++) {
		scanf("%u %lu", &Ci, &Xi);
		M += Ci - Xi;
		if(Xi < lowest)
			lowest = Xi;

		if(Ci > highest)
			highest = Ci;

	}
	M += lowest;
	if(M > highest)
		printf("%lu", M);
	else
		printf("%lu", highest);

	return 0;
}