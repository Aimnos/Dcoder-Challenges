#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
	int m, n, p, small, med, large;
	scanf("%d %d %d", &m, &n, &p);
	if(m < n) {
		if(m < p) {
			small = m;
			if(n < p) {
				med = n;
				large = p;
			} else {
				med = p;
				large = n;
			}
		} else {
			small = p;
			med = m;
			large = n;
		}
	} else {
		if(n < p) {
			small = n;
			if(m < p) {
				med = m;
				large = p;
			} else {
				med = p;
				large = m;
			}
		} else {
			small = p;
			med = n;
			large = m;
		}
	}
	printf("%d %d %d", small, med, large);
	return 0;
}
