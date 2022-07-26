#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N, element;
    uint16_t sum = 0;
    scanf("%" SCNu8, &N);
    for(uint8_t i = 0; i < N; ++i) {
        scanf("%" SCNu8, &element);
        sum += (uint16_t) element;
    }
    printf("%" PRIu16, sum);
    return 0;
}
