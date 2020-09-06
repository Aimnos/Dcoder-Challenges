#include <stdio.h>

int main() {
	int T, R, K, i, j, n, coolness, x;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &R, &K);
		n = 0;
		for(j = 1; j <= R; j++) {
			coolness = 0;
			x = j;
			while(x > 0) {
				if(x % 8 == 5) {
					coolness++;
					x = x >> 1;
				}
				if(coolness >= K) {
					n++;
					break;
				}
				x = x >> 1;
			}
		}
		printf("%d\n", n);
	}
	return 0;
}