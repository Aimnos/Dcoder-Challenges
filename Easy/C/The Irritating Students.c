#include <stdio.h>

int main() {
    unsigned char T;
    scanf("%hhu", &T);
    for(unsigned char i = 0; i < T; i++) {
        unsigned short n;
        scanf("%hu", &n);
        unsigned short A = n / 2;
        printf("%hu %hu\n", A, n - A);
    }
    return 0;
}