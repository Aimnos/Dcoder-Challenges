#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint8_t N;
        scanf("%" SCNu8, &N);
        uint8_t S;
        scanf("%" SCNu8, &S);
        for (uint16_t j = 1; j < N; ++j)
            scanf("%" SCNu8, &S);

        printf("%" PRIu8 "\n", N == 1 ? S : 0);
    }
}
