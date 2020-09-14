#include <stdio.h>

int main() {
	unsigned short N, count = 0;
	unsigned int A;
	scanf("%hu", &N);
	for(unsigned short i = 0; i < N; i++) {
		scanf("%u", &A);
		switch(A) {
			case 2:
			case 3:
				count++;
			case 0:
			case 1:
				break;
			default:
				if(A % 2 == 0 || A % 2 == 0)
					break;

				unsigned int j = 5;
				while(j * j <= A) {
					if(A % j == 0 || A% (j + 2) == 0)
						break;
					else
						j += 5;

				}
				count++;
				break;
		}
	}
	printf("%hu", count);
	return 0;
}