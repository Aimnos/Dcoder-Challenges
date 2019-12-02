#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, i, cont = 0, d = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i *= 10) {
		if(cont == 6)
			break;

		if((n/i)%10 == d)
			cont++;
		else {
			d = !d;
			cont = 1;
		}
	}
	if(cont == 6)
		printf("Bad");
	else
		printf("Good");
		
	return 0;
}