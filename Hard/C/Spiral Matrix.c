#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    bool* const composites = calloc(N - 1, sizeof(bool));
    uint16_t* const primes = malloc(N * sizeof(uint16_t));
    uint8_t len = 0;
    for (uint16_t i = 0; i < N - 1; ++i)
        if (!composites[i]) {
            primes[len++] = i + 2;
            for (uint16_t j = (i + 2) * (i + 2) - 2; j < N - 1; j += i + 2)
                composites[j] = true;
        }

    uint16_t* const m = malloc(len * sizeof(uint16_t));
    uint8_t l = sqrtf(len);
    len = 0;
    const uint8_t upper = (l >> 1) + (l % 2);
    for (uint16_t a = 0; a < upper; ++a) {
        for (uint8_t i = a; i < l - a; ++i)
            m[l * a + i] = primes[len++];

        for (uint8_t i = a + 1; i < l - a; ++i)
            m[l * i + l - a - 1] = primes[len++];

        for (uint8_t i = a + 2; i < l - a + 1; ++i)
            m[l * (l - a - 1) + l - i] = primes[len++];

        for (uint8_t i = a + 2; i < l - a; ++i)
            m[l * (l - i) + a] = primes[len++];
    }
    for (uint8_t i = 0; i < len; ++i)
        printf("%" PRIu16 "%c", m[i], i % l == l - 1 ? '\n' : ' ');

    free(m);
    free(primes);
    free(composites);
}
