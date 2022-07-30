#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t N, D;
    scanf("%" SCNu16 " %" SCNu16, &N, &D);
    uint16_t x = D;
    uint16_t y = N;
    while (y > 0) {
        x %= y;
        y ^= x;
        x ^= y;
        y ^= x;
    }
    printf("%" PRIu16 " %" PRIu16, N / x, D / x);
}
