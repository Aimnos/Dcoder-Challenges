#include <stdio.h>

int main() {
	unsigned char T;
	unsigned short A, B, C, D;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%hu %hu %hu %hu", &A, &B, &C, &D);
		if(A + B + C + D == 360)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}