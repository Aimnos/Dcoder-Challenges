#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N;
	scanf("%d", &N);
	if(N == (N/100)*(N/100)*(N/100) + ((N/10)%10)*((N/10)%10)*((N/10)%10) + (N%10)*(N%10)*(N%10))
		printf("YES");
	else
		printf("NO");
		
	return 0;
}