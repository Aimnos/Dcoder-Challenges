#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char N, *matrix;
	scanf("%hhu", &N);
	matrix = (unsigned char *) malloc(N * sizeof (char));
	for(unsigned char i = 0; i < N; i++) {
		for(unsigned char j = 0; j < i; j++) {
			scanf("%hhu", &matrix[j]);
			if(matrix[j] != matrix[i - j]) {
				printf("NO");
				return 0;
			}
		}
		for(unsigned char j = i; j < N; j++)
			scanf("%hhu", &matrix[j - i]);

	}
	printf("YES");
	free(matrix);
	return 0;
}