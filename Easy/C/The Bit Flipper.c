#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
	char x[32];
	int i = 0;
	scanf("%s", x);
	while(x[i] > 0) {
		printf("%d", abs(x[i] - '1'));
		i++;
	}
	return 0;
}