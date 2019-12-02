#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int i, j, isSubstring = 0;
	char A[10], B[5];
	scanf("%s %s", A, B);
	for(i = 0; i <= 5; i++) {
		if(A[i] == B[0]) {
			isSubstring = 1;
			for(j = i; j < i + 5; j++)
				if(A[j] != B[j - i]) {
					isSubstring = 0;
					break;
				}

		}
		if(isSubstring == 1)
			break;
			
	}
	printf("%d", isSubstring);
	return 0;
}