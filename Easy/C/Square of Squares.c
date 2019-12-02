#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main() {
	int x, i, b = 0;
	scanf("%d", &x);
	for(i = 2; i < abs(x); i++)
		if(abs(x)/i == i && abs(x)%i == 0) {
			b = 1;
			break;
		}
		
	if(b == 1)
		printf("YES");
	else
		printf("NO");

	return 0;
}