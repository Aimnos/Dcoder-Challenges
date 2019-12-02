#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, A, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &A);
		if(A%2 == 1)
			printf("Yes\n");
		else
			printf("No\n");
			
	}
	return 0;
}