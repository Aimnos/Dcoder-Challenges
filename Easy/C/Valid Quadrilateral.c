#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, A, B, C, D, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d %d %d", &A, &B, &C, &D);
		if(A + B + C + D == 360)
			printf("YES\n");
		else
			printf("NO\n");
			
	}
	return 0;
}