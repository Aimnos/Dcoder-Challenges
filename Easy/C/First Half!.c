#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	char string[100], i, x;
	for(i = 0; i < 100; i++)
		string[i] = 0;

	scanf("%[^\n]", string);
	i = 0;
	while(string[i] != 0)
		i++;

	x = i/2;
	for(i = 0; i < x; i++)
		printf("%c", string[i]);
		
	return 0;
}