#include <stdio.h>

int main() {
	unsigned char N, element;
	unsigned short sum = 0;
	scanf("%hhu", &N);
	for(unsigned char i = 0; i < N; i++) {
		scanf("%hhu", &element);
		sum += element;
	}
	printf("%hu", sum);
	return 0;
}