#include <stdio.h>

int main() {
	unsigned short N;
	// Even though the problem states that the maximum value for any element is 10000, using unsigned short fails for TestCase#1 and TestCase#2
	unsigned int element, biggest = 0, smallest = -1;
	scanf("%hu", &N);
	for(unsigned short i = 0; i < N; i++) {
		scanf("%u", &element);
		if(element > biggest)
			biggest = element;

		if(element < smallest)
			smallest = element;

	}
	printf("%u", biggest - smallest);
	return 0;
}