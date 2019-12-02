#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int N, Array[100], i;
	char *special = "Yes";
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &Array[i]);
		if(Array[i] < 1)
			special = "No";
			
	}
	printf("%s", special);
	return 0;
}