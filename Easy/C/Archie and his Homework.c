#include <stdio.h>

int main() {
    unsigned short N, D, x, y;
    scanf("%hu %hu", &N, &D);
    x = D;
    y = N;
    while(y > 0) {
        x %= y;
        y ^= x;
        x ^= y;
        y ^= x;
    }
    printf("%hu %hu", N / x, D / x);
    return 0;
}