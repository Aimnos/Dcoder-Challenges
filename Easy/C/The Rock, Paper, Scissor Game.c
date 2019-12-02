#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int i, n;
	char D, Y;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf(" %c %c", &D, &Y);
		if(D == Y)
			printf("Draw\n");
		else if((D == 'R' && Y == 'P') || (D == 'P' && Y == 'S') || (D == 'S' && Y == 'R'))
			printf("You\n");
		else
			printf("Dcoder\n");
			
	}
	return 0;
}