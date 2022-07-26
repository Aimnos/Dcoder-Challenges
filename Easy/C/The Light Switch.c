#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b;
    scanf("%" SCNu8 " %" SCNu8, &a, &b);
    printf("%" PRIu8, a ^ b);
    return 0;
}
