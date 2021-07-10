#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char search_for_substring(char *string, char **words, unsigned short size, unsigned char first) {
	unsigned char highest = first;
	for(unsigned short i = 0; i < size; i++)
		if(string == strstr(string, words[i])) {
			unsigned char *next = string;
			for(unsigned short j = 0; j < 1501; j++) {
				if(words[i][j] == 0)
					break;

				next++;
			}
			unsigned char count = search_for_substring(next, words, size, first + 1);
			if(count > highest)
				highest = count;

		}

	if(string[0] != 0 && highest == first)
		highest--;

	return highest;
}

int main() {
	unsigned char T, N[1501], **words;
	unsigned short L;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%s\n%hu", N, &L);
		words = (unsigned char **) malloc(L * sizeof (char *));
		for(unsigned short j = 0; j < L; j++) {
			words[j] = (unsigned char *) malloc(1501 * sizeof (char));
			scanf("%s", words[j]);
		}
		printf("%hhu\n", search_for_substring(N, words, L, 0));
		for(unsigned short j = 0; j < L; j++)
			free(words[j]);

		free(words);
	}
	return 0;
}