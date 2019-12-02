#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, x, y;
	char string[40];
	scanf("%d %[^\n] %d %d", &N, &string, &x, &y);
	if(string[x] >= 64 && string[x] <= 90)
		string[x] += 32;
	else
		string[x] -= 32;

	if(string[y] >= 64 && string[y] <= 90)
		string[y] += 32;
	else
		string[y] -= 32;

	printf("%s", string);
	return 0;
}