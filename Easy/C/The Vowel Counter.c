#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int i, cont = 0;
	char string[100];
	for(i = 0; i < 100; i++)
		string[i] = 0;

	scanf("%[^\n]", string);
	for(i = 0; i < 100; i++) {
		if(string[i] == 0)
			break;

		if(string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117)
			cont++;
			
	}
	printf("%d", cont);
	return 0;
}