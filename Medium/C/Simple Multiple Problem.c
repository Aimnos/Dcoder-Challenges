#include <stdio.h>

int main() {
	unsigned char T;
	unsigned int N, M, n1, n2, aux;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%u %u", &N, &M);
		n1 = N;
		n2 = M;
		if(n2 > n1) {
			aux = n1;
			n1 = n2;
			n2 = aux;
		}
		while(n2 > 0) {
			aux = n1 % n2;
			n1 = n2;
			n2 = aux;
		}
		printf("%u\n", M / n1);
	}
	return 0;
}