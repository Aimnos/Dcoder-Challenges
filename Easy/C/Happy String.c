#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i;
	scanf("%d", &N);
	for(i = N; i > 0; i--)
		printf("%c", i + 96);
		
	return 0;
}