#include <stdio.h>

int main() {
	int T;
	float N;
	scanf("%d", &T);
	for(int i = 0; i < T; i++) {
		scanf("%f", &N);
		printf("%.2f\n", N);
	}
	return 0;
}