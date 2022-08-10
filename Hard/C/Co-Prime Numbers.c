#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool are_coprime(uint16_t a, uint16_t b) {
    if (b > a) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    while (b != 0) {
        a = (a % b) ^ b;
        b ^= a;
        a ^= b;
    }
    return a == 1;
}

int main() {
    uint16_t X, N;
    scanf("%" SCNu16 "\n%" SCNu16, &X, &N);
    uint16_t lands = 0;
    for (uint16_t i = 0; i < N; ++i) {
        uint16_t Ai;
        scanf("%" SCNu16, &Ai);
        if (are_coprime(X, Ai))
            ++lands;
    }
    printf("%" PRIu16, lands);
}
