#include <stdio.h>

int main() {
	unsigned char T, N;
	unsigned int M;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%hhu %u", &N, &M);
		if(M % N == 0)
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;
}