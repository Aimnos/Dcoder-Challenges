#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    uint16_t sum = 0;
    for(uint8_t i = 0; i < N; ++i) {
        uint8_t element;
        scanf("%" SCNu8, &element);
        sum += element;
    }
    printf("%" PRIu16, sum);
}
