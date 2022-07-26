#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t x;
    scanf("%" SCNu16, &x);
    printf("%" PRIu16, x % 7);
    return 0;
}
