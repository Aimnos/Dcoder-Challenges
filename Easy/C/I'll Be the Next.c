#include <stdio.h>

int main() {
	unsigned char s[101];
	scanf("%s", s);
	for(unsigned char i = 0; s[i] != 0; i++)
		printf("%c", s[i] + 1);

	return 0;
}