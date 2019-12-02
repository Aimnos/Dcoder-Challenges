#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int T, i;
	double total_cost;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%lf", &total_cost);
		if(total_cost > 1000)
			total_cost *= 0.9;
			
		printf("%.2f\n", total_cost);
	}
	return 0;
}