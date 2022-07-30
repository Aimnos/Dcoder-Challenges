#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t n;
    scanf("%" SCNu16, &n);
    for (uint8_t i = 1; i <= 10; ++i)
        printf("%" PRIu32 "\n", n * i);
}
