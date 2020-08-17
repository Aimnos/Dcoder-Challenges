#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int T, N, *A;
	double a1, a2, difference, smallest;
	scanf("%d", &T);
	for(int i = 0; i < T; i++) {
		scanf("%d", &N);
		A = (int *)malloc(N * sizeof(int));
		for(int j = 0; j < N; j++) {
			scanf("%d", &A[j]);
		}
		if(N < 2)
			printf("NO\n");
		else {
			smallest = -1;
			for(int j = 1; j < N; j++) {
				a1 = 0;
				a2 = 0;
				for(int k = 0; k < j; k++)
					a1 += A[k];

				for(int k = j; k < N; k++)
					a2 += A[k];

				a1 /= (double)j;
				a2 /= (double)N - (double)j;
				difference = fabs(a1 - a2);
				if((difference < smallest) || (difference == -1))
					smallest = difference;

			}
			printf("%.2lf\n", smallest);
		}
		free(A);
	}
	return 0;
}