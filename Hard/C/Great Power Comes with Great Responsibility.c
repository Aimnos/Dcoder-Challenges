#include <stdio.h>

int main() {
	int T, x, y, z, i, j, result, prev;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d %d", &x, &y, &z);
		prev = x % z;
		for(j = 1; j < y; j++) {
			result = (prev * x) % z;
			if(result == prev)
				break;

			prev = result;
		}
		printf("%d\n", result);
	}
	return 0;
}