#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b;
    uint32_t sum;
    scanf("%" SCNu8 "%" SCNu8, &a, &b);
    for(uint8_t x = a; x <= b; ++x)
        sum += x * x;

    printf("%" PRIu32, sum);
    return 0;
}
