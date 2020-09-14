#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char N, x, y;
	char *string;
	scanf("%hhu", &N);
	string = (char *) malloc((N + 1) * sizeof (char));
	scanf("%s\n%hhu %hhu", string, &x, &y);
	string[x] += 32 * ((string[x] >= 'A' && string[x] <= 'Z') - (string[x] >= 'a' && string[x] <= 'z'));
	string[y] += 32 * ((string[y] >= 'A' && string[y] <= 'Z') - (string[y] >= 'a' && string[y] <= 'z'));
	printf("%s", string);
	free(string);
	return 0;
}