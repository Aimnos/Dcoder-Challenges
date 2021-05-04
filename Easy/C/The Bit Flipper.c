#include <stdio.h>

int main() {
	unsigned char binary[33];
	scanf("%s", binary);
	for(unsigned char i = 0; binary[i] != 0; i++)
		printf("%hhu", (binary[i] - '0') ^ 1);

	return 0;
}