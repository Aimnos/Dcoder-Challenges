#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        uint16_t n;
        scanf("%" SCNu16, &n);
        uint16_t A = n / 2;
        printf("%" PRIu16 " %" PRIu16 "\n", A, n - A);
    }
    return 0;
}
