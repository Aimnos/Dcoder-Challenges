#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        // Even though the problem states that N and K are at most 100, using uint8_t fails for TestCase#1 and TestCase#2
        uint16_t N, K;
        scanf("%" SCNu16 " %" SCNu16, &N, &K);
        // All tree values are contained in the interval [1; 100]
        uint8_t* const trees = malloc(K * sizeof(uint8_t));
        uint16_t distinct = 0;
        bool seen[100] = {false};
        for (uint16_t j = 0; j < K; ++j) {
            scanf("%" SCNu8, &trees[j]);
            if (!seen[trees[j] - 1]) {
                ++distinct;
                seen[trees[j] - 1] = true;
            }
        }
        printf("%" PRIu8, distinct);
        const uint16_t steps = N - K;
        for (uint16_t j = 0; j < steps; ++j) {
            distinct = 0;
            for (uint8_t k = 0; k < 100; ++k)
                seen[k] = false;

            scanf("%" SCNu8, &trees[j % K]);
            for (uint16_t k = 0; k < K; ++k)
                if (!seen[trees[k] - 1]) {
                    ++distinct;
                    seen[trees[k] - 1] = true;
                }

            printf(" %" PRIu8, distinct);
        }
        printf("\n");
        free(trees);
    }
}
