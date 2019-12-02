#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, n, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &n);
		if(n%2 == 0)
			printf("%d %d\n", n/2, n/2);
		else
			printf("%d %d\n", n/2, n/2 + 1);

	}
	return 0;
}