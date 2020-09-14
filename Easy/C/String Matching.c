#include <stdio.h>
#include <string.h>

int main() {
	unsigned char T;
	char N[101], F[101];
	scanf("%hhu", &T);
	for(unsigned char i = 0; i < T; i++) {
		scanf("%s %s", N, F);
		if(strstr(N, F) != NULL)
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;
}