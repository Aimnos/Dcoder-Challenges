#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	unsigned int m, n;
	scanf("%u %u", &m, &n);
	bool *primes = (bool *) calloc(n, sizeof (bool));
	for(unsigned int x = 2; x <= n; x++) {
		if(!primes[x] && x >= m)
			printf("%u\n", x);

		for(unsigned int i = 2; i <= n / x; i++)
			primes[x * i] = true;

	}
	free(primes);
	return 0;
}