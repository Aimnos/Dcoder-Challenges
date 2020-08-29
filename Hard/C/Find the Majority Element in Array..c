#include <stdio.h>

int main() {
	int n, element, elements[10], i;
	for(i = 0; i < 10; i++)
		elements[i] = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &element);
		elements[element]++;
	}
	for(i = 0; i < 10; i++)
		if(elements[i] > n/2) {
			printf("%d", i);
			return 0;
		}

	printf("-1");
	return 0;
}