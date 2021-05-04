#include <stdio.h>
#include <string.h>

int main() {
	unsigned char A[6], B[11];
	scanf("%s %s", A, B);
	printf("%hhu", strstr(A, B) != NULL);
	return 0;
}