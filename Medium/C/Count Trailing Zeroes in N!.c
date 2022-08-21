#include <inttypes.h>
#include <stdio.h>

int main() {
    uint32_t n;
    scanf("%" SCNu32, &n);
    uint16_t zeroes = 0;
    while (n >= 5) {
        n /= 5;
        zeroes += n;
    }
    printf("%" PRIu16, zeroes);
}
