#include <stdio.h>

int main() {
	signed short n;
	float power_of_two = 1;
	scanf("%hd", &n);
	if(n < 0) {
		printf("1.0");
		for(signed short i = 0; i > n; i--) {
			power_of_two /= 2;
			printf(",%.*f", - i + 1, power_of_two);
		}
	} else {
		printf("1");
		for(unsigned short i = 0; i < n; i++) {
			power_of_two *= 2;
			printf(",%.0f", power_of_two);
		}
	}
	return 0;
}