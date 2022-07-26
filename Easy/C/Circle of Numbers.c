#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N, X;
    scanf("%" SCNu8 " %" SCNu8, &N, &X);
    printf("%" PRIu8, (N / 2 + X) % N);
}
