#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t l, h, d;
    scanf("%" SCNu16 "%" SCNu16 "%" SCNu16, &l, &h, &d);
    uint16_t divisors = 0;
    uint16_t number = l;
    while(number <= h && number % d != 0)
        ++number;

    while(number <= h) {
        ++divisors;
        number += d;
    }
    printf("%" PRIu16, divisors);
    return 0;
}
