#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    for (uint8_t i = 0; i < n; ++i) {
        uint64_t x;
        scanf("%" SCNu64, &x);
        uint64_t x1 = 1, x2 = 1;
        while (x2 <= x) {
            x1 = (x1 + x2) ^ x2;
            x2 ^= x1;
            x1 ^= x2;
        }
        printf("%" PRIu64 "\n", x2);
    }
}
