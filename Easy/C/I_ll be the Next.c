#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	char string[100], i;
	for(i = 0; i < 100; i++)
		string[i] = 0;

	scanf("%[^\n]", string);
	for(i = 0; i < 100; i++) {
		if((string[i] > 64 && string[i] < 90) || (string[i] > 96 && string[i] < 122))
			printf("%c", string[i] + 1);
		else if(string[i] == 90)
			printf("a");
		else if(string[i] == 122)
			printf("A");
		else if(string[i] >= 32)
			printf("%c", string[i]);
			
	}
	return 0;
}