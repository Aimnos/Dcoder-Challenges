#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint8_t N, M;
        scanf("%" SCNu8 " %" SCNu8, &N, &M);
        printf("%" PRIu32 "\n", M * ((N * (N - 1)) >> 1));
    }
}
