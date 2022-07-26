#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    printf("%" PRIu32, (uint32_t) N * (N + 1) / 2);
    return 0;
}
