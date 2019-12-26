#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	char w[100];
	int i, cont, j;
	for(j = 0; j < 100; j++)
		w[j] = 0;

	scanf("%[^\n]", w);
	for(i = 32; i <= 126; i++) {
		cont = 0;
		for(j = 0; j < 100; j++)
			if(w[j] == i) {
				cont++;
				if(cont > 1)
					w[j] = 0;

			}

	}
	for(j = 0; j < 100; j++)
		if(w[j] >= 32 && w[j] <= 126)
			printf("%c", w[j]);
			
	return 0;
}