#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        // even though the problem states that N is less than 101, using uint8_t causes TestCase#1 and TestCase#2 to fail
        uint16_t N, K;
        scanf("%" SCNu16 " %" SCNu16, &N, &K);
        for (uint16_t j = 0; j < N; ++j) {
            uint16_t element;
            scanf("%" SCNu16, &element);
            K ^= element;
        }
        printf("%" PRIu16 "\n", K);
    }
}
