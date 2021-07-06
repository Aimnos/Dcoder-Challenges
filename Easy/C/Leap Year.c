#include <stdio.h>

int main() {
	unsigned char T;
	unsigned int Year;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%u", &Year);
		if(Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;
}