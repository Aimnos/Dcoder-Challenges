#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, biggest = 1, smallest = 10000, i, element;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &element);
		if(element > biggest)
			biggest = element;

		if (element < smallest)
			smallest = element;
			
	}
	printf("%d", biggest - smallest);
	return 0;
}