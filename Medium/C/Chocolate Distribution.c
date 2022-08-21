#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint16_t N;
        uint32_t M;
        scanf("%" SCNu16 " %" SCNu32, &N, &M);
        const uint16_t mid = M % (N + 1);
        uint32_t amount = 1 + M / (N + 1);
        for (uint32_t j = 0; j < mid; ++j)
            printf("%" PRIu32 " ", amount);

        --amount;
        for (uint32_t j = mid; j < N; ++j)
            printf("%" PRIu32 " ", amount);

        printf("%" PRIu32 "\n", amount);
    }
}
