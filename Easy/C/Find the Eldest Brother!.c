#include <stdio.h>

int main() {
	unsigned char age, eldest = 0;
	for(unsigned char i = 0; i < 5; i++) {
		scanf("%hhu", &age);
		if(age > eldest)
			eldest = age;

	}
	printf("%hhu", eldest);
	return 0;
}