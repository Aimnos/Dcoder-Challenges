#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        // even though the problem states that R and K are both less than 106, using uint8_t causes all TestCases to fail
        uint16_t R, K;
        scanf("%" SCNu16 " %" SCNu16, &R, &K);
        if (K == 0) {
            printf("%" PRIu16 "\n", R);
            continue;
        }
        uint16_t very_cool = 0;
        for (uint16_t j = 1; j <= R; ++j) {
            uint16_t coolness = 0;
            for (uint16_t x = j; x > 0; x >>= 1)
                if (x % 0b1000 == 0b101) {
                    if (++coolness >= K) {
                        ++very_cool;
                        break;
                    }
                    x >>= 1;
                }
        }
        printf("%" PRIu16 "\n", very_cool);
    }
}
