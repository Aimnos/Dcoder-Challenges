#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char bombs = 1;
	unsigned int n, k, *x, low, drop;
	scanf("%u %u", &n, &k);
	x = (unsigned int *) malloc(n * sizeof (int));
	for(unsigned int i = 0; i < n; i++)
		scanf("%u", &x[i]);

	for(unsigned int i = 1; i < n; i++) {
		unsigned int j = i, current = x[i];
		while(j > 0 && x[j - 1] > current) {
			x[j] = x[j - 1];
			j--;
		}
		x[j] = current;
	}
	drop = low = x[0];
	for(unsigned int i = 1; i < n; i++) {
		if(x[i] > low + k) {
			if(x[i] > drop + k) {
				drop = low = x[i];
				bombs++;
			}
		} else
			drop = x[i];

	}
	printf("%hhu", bombs);
	return 0;
}