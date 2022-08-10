#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t x, y, z;
        scanf("%" SCNu32 " %" SCNu32 " %" SCNu32, &x, &y, &z);
        uint32_t result = x % z;
        while (--y > 0)
            result = (result * x) % z;

        printf("%" PRIu32 "\n", result);
    }
}
