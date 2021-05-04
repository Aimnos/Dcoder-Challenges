#include <stdio.h>

int main() {
	unsigned char n;
	float average = 0.0;
	scanf("%hhu", &n);
	for(unsigned char i = 0; i < n; i++) {
		unsigned short element;
		scanf("%hu", &element);
		average += element;
	}
	average /= (float) n;
	printf("%hu", (unsigned short) average + (2 * average <= 2 * (unsigned short) average + 1));
	return 0;
}