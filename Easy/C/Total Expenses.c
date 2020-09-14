#include <stdio.h>

int main() {
	unsigned char T;
	unsigned int total_cost;
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%u", &total_cost);
		if(total_cost > 1000)
			printf("%.2f\n", (double) total_cost * 0.9);
		else
			printf("%u.00\n", total_cost);

	}
	return 0;
}