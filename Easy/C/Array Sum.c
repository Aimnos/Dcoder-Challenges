#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    uint16_t biggest = 0;
    uint32_t sum = 0;
    scanf("%" SCNu8, &n);
    for(uint8_t i = 0; i < n; ++i) {
        uint16_t A;
        scanf("%" SCNu16, &A);
        sum += A;
        if(A > biggest)
            biggest = A;
    }
    printf("%" PRIu16, sum % biggest);
}
