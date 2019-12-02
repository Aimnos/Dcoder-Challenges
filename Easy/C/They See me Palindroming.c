#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	char string[5];
	scanf("%s", string);
	if(string[0] == string[4] && string[1] == string[3])
		printf("Yes");
	else
		printf("No");
		
	return 0;
}