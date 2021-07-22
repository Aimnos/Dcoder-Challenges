#include <stdio.h>

int main() {
    unsigned char N, X;
    scanf("%hhu %hhu", &N, &X);
    printf("%hhu", (N / 2 + X) % N);
    return 0;
}