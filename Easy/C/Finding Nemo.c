#include <stdio.h>
#include <string.h>

int main() {
	unsigned char N;
	char word[50];
	scanf("%hhu", &N);
	for(unsigned char i = 0; i < N; i++) {
		scanf("%s", word);
		if(strcmp(word, "Nemo") == 0) {
			printf("%hhu", i + 1);
			return 0;
		}
	}
	return 0;
}