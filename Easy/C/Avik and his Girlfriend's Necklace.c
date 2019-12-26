#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, pearl[100], i, key = 0, j;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &pearl[i]);
		if(pearl[key] > pearl[i])
			key = i;

	}
	for(i = 0; i < N; i++) {
		if(pearl[key] < pearl[i]) {
			pearl[i] += pearl[key];
			pearl[key] = pearl[i] - pearl[key];
			pearl[i] -= pearl[key];
		}
		key = i + 1;
		for(j = i + 1; j < N; j++)
			if(pearl[key] > pearl[j])
				key = j;

		printf("%d ", pearl[i]);
	}
	return 0;
}