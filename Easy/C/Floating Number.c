#include <stdio.h>

int main() {
    unsigned short T;
    double N;
    scanf("%hu", &T);
    for(unsigned short i = 0; i < T; i++) {
        scanf("%lf", &N);
        printf("%.2lf\n", N);
    }
    return 0;
}