#include <stdio.h>

int main() {
	int a, b, c, d, m, n, aux;
	scanf("%d %d\n%d %d\n%d %d", &n, &m, &a, &b, &c, &d);
	aux = a + c;
	a += d;
	c += b;
	b += d;
	d = aux;
	if((a <= m) || (b <= m) || (c <= m) || (d <= m) || (a <= n) || (b <= n) || (c <= n) || (d <= n))
		printf("Yes");
	else
		printf("No");

	return 0;
}