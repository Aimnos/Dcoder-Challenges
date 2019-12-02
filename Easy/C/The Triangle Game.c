#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int i, j;
	char string[20];
	for(i = 0; i < 20; i++)
		string[i] = 0;

	scanf("%[^\n]", string);
	for(i = 0; i < 20; i++) {
		if(string[i] == 0)
			break;

		for(j = 0; j <= i; j++)
			printf("%c", string[j]);
			
		printf("\n");
	}
	return 0;
}