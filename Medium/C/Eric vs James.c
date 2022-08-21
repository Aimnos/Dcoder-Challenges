#include <inttypes.h>
#include <stdio.h>

uint8_t gcd(uint8_t a, uint8_t b) {
    if (b > a) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    while (b != 0) {
        a = (a % b) ^ b;
        b ^= a;
        a ^= b;
    }
    return a;
}

int main() {
    uint8_t a, b;
    scanf("%" SCNu8 " %" SCNu8, &a, &b);
    uint32_t lcm = 1;
    for (uint8_t i = b; i >= a; --i)
        if (lcm % i != 0)
            lcm *= i / gcd(lcm, i);

    printf("%" PRIu32, lcm);
}
