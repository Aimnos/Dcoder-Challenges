#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	char string[15];
	int i;
	for(i = 0; i < 15; i++)
		string[i] = 0;

	scanf("%[^\n]", string);
	for(i = 0; i < 15; i++) {
		if(string[i] == 0)
			break;

		if(string[i] > 64 && string[i] < 91)
			printf("%c", string[i] + 32);
		else if(string[i] > 96 && string[i] < 123)
			printf("%c", string[i] - 32);
		else
			printf("%c", string[i]);
			
	}
	return 0;
}