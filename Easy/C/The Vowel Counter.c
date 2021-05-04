#include <stdio.h>

int main() {
	unsigned char string[1001];
	scanf("%[^\n]", string);
	unsigned short vowels = 0;
	for(unsigned char i = 0; string[i] != 0; i++) {
		switch(string[i]) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowels++;
				break;
		}
	}
	printf("%hu", vowels);
	return 0;
}