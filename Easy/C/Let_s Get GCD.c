#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n1, n2, aux;
	scanf("%d %d", &n1, &n2);
	if(n2 > n1) {
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	while(n2 != 0) {
		aux = n1%n2;
		n1 = n2;
		n2 = aux;
	}
	printf("%d", n1);
	return 0;
}
