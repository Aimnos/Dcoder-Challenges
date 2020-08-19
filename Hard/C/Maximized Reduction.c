#include <stdio.h>

int main() {
	int T, num, n[9], i, j, k;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &num);
		for(j = 0; j < 9; j++) {
			n[j] = num % 10;
			num /= 10;
		}
		j = 8;
		while(n[j] == 0)
			j--;

		k = j;
		while(j > 0) {
			if(n[j - 1] > n[j])
				break;

			j--;
		}
		n[j] = -1;
		while(k >= 0) {
			if(n[k] != -1)
				printf("%d", n[k]);

			k--;
		}
		printf("\n");
	}
	return 0;
}