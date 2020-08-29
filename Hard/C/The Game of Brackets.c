#include <stdio.h>

int main() {
	int i, size = 0;
	char string[101], brackets[100];
	scanf("%s", string);
	for(i = 0; i < 101; i++) {
		if(string[i] == 0)
			break;

		switch(string[i]) {
			case 40:
			case 91:
			case 123:
				brackets[size++] = string[i];
				break;
			case 41:
				if(brackets[--size] != 40) {
					printf("No");
					return 0;
				}
				break;
			case 93:
			case 125:
				if(brackets[--size] != string[i] - 2) {
					printf("No");
					return 0;
				}
				break;
		}
	}
	printf("Yes");
	return 0;
}