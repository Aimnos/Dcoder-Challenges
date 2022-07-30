#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t n1, n2;
    scanf("%" SCNu16 "\n%" SCNu16, &n1, &n2);
    if (n1 < n2) {
        n1 ^= n2;
        n2 ^= n1;
        n1 ^= n2;
    }
    while (n2 > 0) {
        n1 %= n2;
        n1 ^= n2;
        n2 ^= n1;
        n1 ^= n2;
    }
    printf("%" PRIu16, n1);
}
