#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t N;
        scanf("%" SCNu32, &N);
        uint32_t* factors = malloc(N * sizeof(uint32_t));
        for (uint32_t j = 0; j < N; ++j) {
            uint32_t factor;
            scanf("%" SCNu32, &factor);
            uint32_t k = j;
            while (k > 0 && factors[k - 1] > factor) {
                factors[k] = factors[k - 1];
                --k;
            }
            factors[k] = factor;
        }
        uint32_t K;
        scanf("%" SCNu32, &K);
        uint64_t gifts = factors[0];
        for (uint32_t j = 1; j < K; ++j)
            gifts += factors[j];

        printf("%" PRIu64 "\n", gifts);
        free(factors);
    }
}
