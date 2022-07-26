#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    printf("%" PRIu16, (uint16_t) n * (uint16_t) (n - 1));
    return 0;
}
