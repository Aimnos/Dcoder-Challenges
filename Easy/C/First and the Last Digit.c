#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, N, first, last, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		last = N%10;
		first = N;
		while(first >= 10)
			first /= 10;
			
		printf("%d\n", first + last);
	}
	return 0;
}
