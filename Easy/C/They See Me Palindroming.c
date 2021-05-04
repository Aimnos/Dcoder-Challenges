#include <stdio.h>

int main() {
	unsigned char string[6];
	scanf("%s", string);
	if(string[0] == string[4] && string[1] == string[3])
		printf("Yes");
	else
		printf("No");

	return 0;
}