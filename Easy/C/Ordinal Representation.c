#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int x;
	scanf("%d", &x);
	switch(x%10) {
	case 1:
		printf("%dst", x);
		break;
	case 2:
		printf("%dnd", x);
		break;
	case 3:
		printf("%drd", x);
		break;
	default:
		printf("%dth", x);
		break;
	}
	return 0;
}