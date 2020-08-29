#include <stdio.h>
#include <stdbool.h>

static bool A[2750158];

int main() {
	int n = 2, i = 0, j, index;
	for(i = 0; i < 1657; i++)
		if(!A[i])
			for(j = (i + 2) * (i + 2) - 2; j < 2750158; j += i + 2)
				A[j] = true;


	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &index);
		for(j = 0; j < 2750158; j++) {
			if(!A[j])
				index--;

			if(index == 0)
				break;

		}
		printf("%d ", j + 2);
	}
	return 0;
}