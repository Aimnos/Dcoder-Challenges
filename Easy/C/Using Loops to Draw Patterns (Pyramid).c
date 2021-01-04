#include <stdio.h>

int main() {
	int i, j;
	for(i = 5; i > 0; i--) {
		for(j = 1; j < i; j++)
			printf(" ");

		for(j = 1; j < 12 - 2*i; j++)
			printf("*");

		printf("\n");
	}
	return 0;
}