#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int l, h, d, i, cont = 0;
	scanf("%d %d %d", &l, &h, &d);
	for(i = l; i <= h; i++)
		if(i%d == 0)
			cont++;
			
	printf("%d", cont);
	return 0;
}