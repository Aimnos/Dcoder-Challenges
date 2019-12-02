#include <stdio.h>
#include <string.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i;
	char word[50];
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		scanf("%s", word);
		if(strcmp(word, "Nemo") == 0)
			printf("%d", i);
			
	}
	return 0;
}
