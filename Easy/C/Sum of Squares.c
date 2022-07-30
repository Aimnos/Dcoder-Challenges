#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b;
    scanf("%" SCNu8 "%" SCNu8, &a, &b);
    uint32_t sum = 0;
    for (uint8_t x = a; x <= b; ++x)
        sum += x * x;

    printf("%" PRIu32, sum);
}
