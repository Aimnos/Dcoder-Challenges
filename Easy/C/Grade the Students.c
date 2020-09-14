#include <stdio.h>

int main() {
	unsigned char T, Mathematics, Algorithms;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%hhu %hhu", &Mathematics, &Algorithms);
		if(Mathematics > 70 && Algorithms > 50)
			printf("Pass\n");
		else
			printf("Fail\n");

	}
	return 0;
}