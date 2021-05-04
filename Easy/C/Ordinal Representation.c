#include <stdio.h>

int main() {
	unsigned char N;
	scanf("%hhu", &N);
	switch(N) {
		case 1:
			printf("1st");
			break;
		case 2:
			printf("2nd");
			break;
		case 3:
			printf("3rd");
			break;
		default:
			printf("%hhuth", N);
			break;
	}
	return 0;
}