#include <stdio.h>

int main() {
	unsigned short maxW, value1, weight1, value2, weight2;
	scanf("%hu\n%hu %hu\n%hu %hu", &maxW, &value1, &weight1, &value2, &weight2);
	if(maxW < weight1 + weight2) {
		if(maxW < weight1) {
			if(maxW < weight2)
				printf("0");
			else
				printf("%hu", value2);

		} else {
			if(value1 < value2) {
				if(maxW < weight2)
					printf("%hu", value1);
				else
					printf("%hu", value2);

			} else
				printf("%hu", value1);

		}
	} else
		printf("%hu", value1 + value2);

	return 0;
}