#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
	unsigned char N, *frequencies, **words, size = 0;
	scanf("%hhu", &N);
	frequencies = (unsigned char *) calloc(N, sizeof (char));
	words = (char **) malloc(N * sizeof (char*));
	for(unsigned char i = 0; i < N; i++) {
		unsigned char word[41];
		scanf("%s", word);
		bool appeared = false;
		for(unsigned char j = 0; j < size; j++)
			if(strcmp(word, words[j]) == 0) {
				appeared = true;
				frequencies[j]++;
				break;
			}

		if(!appeared) {
			frequencies[size] = 1;
			words[size] = (char *) malloc(41 * sizeof (char));
			strcpy(words[size++], word);
		}
	}
	for(unsigned char i = 0; i < size; i++) {
		unsigned char highestPos = 0;
		for(unsigned char j = 1; j < size; j++)
			if(frequencies[j] > frequencies[highestPos])
				highestPos = j;

		printf("%s ", words[highestPos]);
		free(words[highestPos]);
		frequencies[highestPos] = 0;
	}
	free(words);
	free(frequencies);
	return 0;
}