#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int n, list[100], i;
	double avg = 0;
	for(i = 0; i < 100; i++)
		list[i] = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &list[i]);
		avg += list[i];
	}
	avg /= n;
	if(2*avg <= 2*(int)avg + 1)
		printf("%d", (int)avg);
	else
		printf("%d", (int)avg + 1);
		
	return 0;
}