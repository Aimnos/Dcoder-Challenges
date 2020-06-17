#include <stdio.h>

int main() {
	int T;
	long int N, M, n1, n2, aux;
	scanf("%d", &T);
	for(int i = 0; i < T; i++) {
		scanf("%ld %ld", &N, &M);
		n1 = N;
		n2 = M;
		if(n2 > n1) {
		aux = n1;
		n1 = n2;
		n2 = aux;
		}
		while(n2 > 0) {
			aux = n1%n2;
			n1 = n2;
			n2 = aux;
		}
		printf("%ld\n", M/n1);
	}
	return 0;
}