#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i, j;
	char input_string[20], output_string[60];
	scanf("%d %[^\n]", &N, &input_string);
	for(i = 0; i <= N; i++)
		for(j = i*3; j <= i*3 + 2; j++)
			output_string[j] = input_string[i];
			
	printf("%s", output_string);
	return 0;
}