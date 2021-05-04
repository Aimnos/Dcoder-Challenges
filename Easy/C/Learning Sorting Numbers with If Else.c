#include <stdio.h>

int main() {
	unsigned short m, n, p;
	scanf("%hu %hu %hu", &m, &n, &p);
	if(m < n) {
		if(n < p)
			printf("%hu %hu %hu", m, n, p);
		else {
			if(m < p)
				printf("%hu %hu %hu", m, p, n);
			else
				printf("%hu %hu %hu", p, m, n);

		}
	} else {
		if(m < p)
			printf("%hu %hu %hu", n, m, p);
		else {
			if(n < p)
				printf("%hu %hu %hu", n, p, m);
			else
				printf("%hu %hu %hu", p, n, m);

		}
	}
	return 0;
}