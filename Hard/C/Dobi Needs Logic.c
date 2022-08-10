#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t X, Y;
        scanf("%" SCNu32 " %" SCNu32, &X, &Y);
        printf(
            "%" PRIu64 "\n",
            (uint64_t)((X * (X - 1)) >> 1) * ((Y * (Y - 1)) >> 1)
        );
    }
}
