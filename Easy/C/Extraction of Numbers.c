#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i, j;
	char word[100];
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		for(j = 0; j < 100; j++)
			word[j] = 0;

		scanf(" %s", word);
		for(j = 0; j < 100; j++)
			if(word[j] >= '0' && word[j] <= '9')
				printf("%c ", word[j]);
				
	}
	return 0;
}