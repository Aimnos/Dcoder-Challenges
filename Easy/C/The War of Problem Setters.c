#include <stdio.h>

int main() {
	unsigned char Garry = 0, Sharry = 0, a, b, c;
	scanf("%hhu %hhu %hhu", &a, &b, &c);
	Garry = a + b + c;
	scanf("%hhu %hhu %hhu", &a, &b, &c);
	Sharry = a + b + c;
	if(Garry > Sharry)
		printf("Garry %hhu", Garry - Sharry);
	else if(Garry < Sharry)
		printf("Sharry %hhu", Sharry - Garry);
	else
		printf("None 0");

	return 0;
}