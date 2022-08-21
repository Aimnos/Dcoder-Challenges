#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint16_t N, a1, a2;
        scanf("%" SCNu16 "\n%" SCNu16 " %" SCNu16, &N, &a1, &a2);
        const uint16_t r = a2 - a1;
        uint16_t wrong = a1;
        for (uint16_t j = 2; j < N; ++j) {
            uint16_t aN;
            scanf("%" SCNu16, &aN);
            if (aN != a1 + j * r) {
                if (wrong == a1)
                    wrong = aN;
                else
                    wrong = a2;
            }
        }
        printf("%" PRIu16 "\n", wrong);
    }
}
