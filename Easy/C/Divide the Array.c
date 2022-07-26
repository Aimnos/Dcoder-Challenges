#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    for(uint16_t i = 0; i < N; ++i) {
        uint32_t element;
        scanf("%" SCNu32, &element);
        if(element % 2 == 0 && i % 2 == 1)
            printf("%" PRIu32 " ", element);
    }
}
