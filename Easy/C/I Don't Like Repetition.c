#include <stdio.h>
#include <stdbool.h>

int main() {
	unsigned char w[101];
	scanf("%s", w);
	bool hash_set[58] = { false };
	for(unsigned char i = 0; w[i] != 0; i++) {
		if(!hash_set[w[i] - 65]) {
			hash_set[w[i] - 65] = true;
			printf("%c", w[i]);
		}
	}
	return 0;
}