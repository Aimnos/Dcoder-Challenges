#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, K, array[100], i, j, cont;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &K);
		for(j = 0; j < K; j++)
			scanf("%d", &array[j]);

		for(j = 9; j >= 0; j--)
			for(cont = 0; cont < K; cont++)
				if(array[cont] == j)
					printf("%d", array[cont]);
					
		printf("\n");
	}
	return 0;
}