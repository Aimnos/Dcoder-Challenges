#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, math, alg, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &math, &alg);
		if(math > 70 && alg > 50)
			printf("Pass\n");
		else
			printf("Fail\n");
			
	}
	return 0;
}