#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, i, x;
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		scanf("%d", &x);
		if(x%2 == 0 && i%2 == 0)
			printf("%d ", x);
			
	}
	return 0;
}