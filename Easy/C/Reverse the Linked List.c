#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int list[101], i = 0;
	do {
		scanf("%d", &list[i]);
		i++;
	} while(list[i - 1] != -1);
	i--;
	while(i > 0) {
		i--;
		printf("%d ", list[i]);
	}
	return 0;
}