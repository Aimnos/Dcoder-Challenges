#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i, j;
	char string[26];
	scanf("%d", &N);
	for(i = 0; i < 26; i++)
		string[i] = 0;

	for(i = 0; i < N; i++)
		scanf(" %c", &string[i]);

	for(i = 0; i < 26; i++)
		for(j = 0; j < N; j++)
			if(string[j] == i + 64 || string[j] == i + 96)
				printf("%c ", string[j]);

	return 0;
}
