#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    printf("%" PRIu16, 9 * T / 5 + 32);
}
