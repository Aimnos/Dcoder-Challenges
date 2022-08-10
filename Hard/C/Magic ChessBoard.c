#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint8_t N;
        scanf("%" SCNu8, &N);

        // solution is sum((N - i) * (N - i)) for 0 <= i < N, also known as the square pyramidal number for N
        printf("%" PRIu32 "\n", N * (N + 1) * (2 * N + 1) / 6);
    }
}
