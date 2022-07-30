#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint8_t N, K;
        scanf("%" SCNu8 " %" SCNu8, &N, &K);
        uint8_t count = 0;
        for (uint8_t j = 0; j < N; ++j) {
            uint8_t Ai;
            scanf("%" SCNu8, &Ai);
            if (K == 2 * Ai)
                ++count;
        }
        printf("%" PRIu8 "\n", count);
    }
}
