#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t N;
        scanf("%" SCNu32, &N);
        // the only members with an even number of admirers are the ones whose number is a perfect square
        printf("%" PRIu32 "\n", N - (uint32_t)floorf(sqrtf(N)));
    }
}
