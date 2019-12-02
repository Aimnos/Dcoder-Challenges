#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int i;
	char string[1000];
	for(i = 0; i < 1000; i++)
		string[i] = 0;

	scanf("%[^\n]", string);
	if(string[0] > 96 && string[0] < 123)
		printf("%c", string[0] - 32);
	else
		printf("%c", string[0]);

	for(i = 1; i < 1000; i++) {
		if(string[i] == 0)
			break;

		if(string[i - 1] == 32 && string[i] > 96 && string[i] < 123)
			printf("%c", string[i] - 32);
		else
			printf("%c", string[i]);
			
	}
	return 0;
}