#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, i, j;
	char s[100];
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		for(j = 0; j < 100; j++)
			s[j] = 0;

		scanf(" %[^\n]", s);
		j = 0;
		while(s[j] != 0) {
			s[j] -= 32;
			j++;
		}
		printf("%s\n", s);
	}
	return 0;
}
