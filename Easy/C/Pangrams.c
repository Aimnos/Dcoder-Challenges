#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int i, j, cont, letters;
	char string[100];
	for(i = 0; i < 100; i++)
		string[i] = 0;

	scanf(" %s", string);
	for(i = 0; i < 100; i++)
		if(string[i] >= 97 && string[i] <= 122)
			string[i] -= 32;

	for(i = 65; i <= 90; i++) {
		for(j = 0; j < 100; j++)
			if(string[j] == i)
				cont++;

		if(cont > 0)
			letters++;

		cont = 0;
	}
	if(letters == 26)
		printf("YES");
	else
		printf("NO");
		
	return 0;
}
