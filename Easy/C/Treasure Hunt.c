#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int maxW, value1, weight1, value2, weight2;
	scanf("%d\n%d %d\n%d %d", &maxW, &value1, &weight1, &value2, &weight2);
	if(weight1 + weight2 <= maxW)
		printf("%d", value1 + value2);
	else if(value1 >= value2 && weight1 <= maxW)
		printf("%d", value1);
	else if(weight2 <= maxW)
		printf("%d", value2);
	else
		printf("0");
		
	return 0;
}