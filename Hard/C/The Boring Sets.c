#include <stdio.h>

long long int power_of_two(int e) {
	long long int x = 2, y = 1;
	while(e > 0) {
		if(e % 2 == 0) {
			e /= 2;
			x *= x;
		} else {
			e -= 1;
			y *= x;
		}
	}
	return y;
}

int main() {
	int T, N, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%lld\n", (N + 1) * N * power_of_two(N - 1) / 2);
	}
	return 0;
}