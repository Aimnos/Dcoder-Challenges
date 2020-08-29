#include <stdio.h>

int main() {
	int n, i, j, k, smallest_pos, pos, aux;
	char string[1001];
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%s", &string);
		for(j = 0; j < 1000; j++) {
			if(string[j] == 0)
				break;

			smallest_pos = j;
			for(k = j + 1; k < 1001; k++) {
				if(string[k] == 0)
					break;

				if(string[k] < 'a') {
					if((string[smallest_pos] < 'a') && string[k] < string[smallest_pos])
						smallest_pos = k;
					else if(string[k] <= string[smallest_pos] - 32)
						smallest_pos = k;

				} else {
					if((string[smallest_pos] < 'a') && string[k] - 32 < string[smallest_pos])
						smallest_pos = k;
					else if(string[k] - 32 < string[smallest_pos] - 32)
						smallest_pos = k;

				}
			}
			aux = string[smallest_pos];
			string[smallest_pos] = string[j];
			string[j] = aux;
		}
		printf("%s\n", string);
	}
	return 0;
}