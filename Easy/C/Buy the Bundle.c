#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, N, M, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		if(M%N == 0)
			printf("Yes\n");
		else
			printf("No\n");
			
	}
	return 0;
}