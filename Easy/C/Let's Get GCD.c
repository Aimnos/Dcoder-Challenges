#include <stdio.h>

int main() {
	unsigned short n1, n2;
	scanf("%hu\n%hu", &n1, &n2);
	if(n1 < n2) {
		n1 ^= n2;
		n2 ^= n1;
		n1 ^= n2;
	}
	while(n2 > 0) {
		unsigned short aux = n1 % n2;
		n1 = n2;
		n2 = aux;
	}
	printf("%hu", n1);
	return 0;
}