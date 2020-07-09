#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, size, *m, primes[81] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419};
	scanf("%d", &N);
	for(size = 0; size < 81; size++)
		if(primes[size] > N)
			break;

	m = (int*)malloc(size*sizeof(int));
	for(N = 0; N < 9; N++)
		if((N + 1)*(N + 1) > size)
			break;

	int a = 0, b = N - 1, c = 0, d = N - 1, p = 0;
	while(b >= a || d >= c) {
		int i;
		for(i = a; i <= b; i++)
			m[N*c + i] = primes[p + i - a];

		p += b - a + 1;
		c++;
		for(i = c; i <= d; i++)
			m[N*i + b] = primes[p + i - c];

		p += d - c + 1;
		b--;
		for(i = b; i >= a; i--)
			m[N*d + i] = primes[p + b - i];

		p += b - a + 1;
		d--;
		for(i = d; i >=c; i--)
			m[N*i + a] = primes[p + d - i];

		p += d - c + 1;
		a++;
	}
	for(int i = 0; i < size; i++) {
		printf("%d", m[i]);
		if(i%N == N - 1) {
			printf("\n");
		} else {
			printf(" ");
		}
	}
	free(m);
	return 0;
}