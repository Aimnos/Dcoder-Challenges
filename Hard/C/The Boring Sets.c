#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint8_t N;
        scanf("%" SCNu8, &N);
        printf("%" PRIu64 "\n", (N * (N + 1) >> 1) * (uint64_t)exp2f(N - 1));
    }
}
