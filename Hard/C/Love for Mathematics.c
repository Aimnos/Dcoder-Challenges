#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short N, students = 0;
	unsigned long int *X, *Y, books = 0;
	scanf("%hu", &N);
	X = (unsigned long int *) malloc(N * sizeof (long int));
	Y = (unsigned long int *) malloc(N * sizeof (long int));
	for(unsigned short i = 0; i < N; i++)
		scanf("%lu %lu", &X[i], &Y[i]);

	for(unsigned short i = 0; i < N; i++) {
		unsigned short happy = 0;
		for(unsigned short j = 0; j < N; j++)
			if(X[i] >= X[j] && X[i] <= Y[j])
				happy++;

		if(happy > students || (happy == students && X[i] < books)) {
			students = happy;
			books = X[i];
		}
	}
	printf("%lu %hu", books, students);
	free(Y);
	free(X);
	return 0;
}