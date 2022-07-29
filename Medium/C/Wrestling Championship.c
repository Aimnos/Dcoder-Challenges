#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        uint32_t N;
        scanf("%" SCNu32, &N);
        printf("%" PRIu32 "\n", N - 1);
    }
}
