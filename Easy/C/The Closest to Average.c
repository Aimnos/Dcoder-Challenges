#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint8_t n;
    float average = 0.0;
    scanf("%" SCNu8, &n);
    for(uint8_t i = 0; i < n; ++i) {
        uint16_t elem;
        scanf("%" SCNu16, &elem);
        average += elem;
    }
    average /= (float) n;
    printf("%" PRIu16, average - floor(average) <= 0.5 ? (uint16_t) floor(average) : (uint16_t) ceil(average));
    return 0;
}
