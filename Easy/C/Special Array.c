#include <stdio.h>

int main() {
	unsigned char N, element;
	scanf("%hhu", &N);
	for(unsigned char i = 0; i < N; i++) {
		scanf("%hhu", &element);
		if(element == 0) {
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}