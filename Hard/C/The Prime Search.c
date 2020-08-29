#include <stdio.h>
#include <stdbool.h>

static bool A[2750160];

int main() {
	int n = 2, i = 0, j, index;
	for(i = 2; i <= 1658; i++)
		if(!A[i])
			for(j = i * i; j < 2750160; j += i)
				A[j] = true;


	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &index);
		for(j = 2; j < 2750160; j++) {
			if(!A[j])
				index--;

			if(index == 0)
				break;

		}
		printf("%d ", j);
	}
	return 0;
}