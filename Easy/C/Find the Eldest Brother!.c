#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int a, b = 0, i;
	for(i = 0; i < 5; i++) {
		scanf("%d", &a);
		if(a > b)
			b = a;
			
	}
	printf("%d", b);
	return 0;
}