#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    double average = 0.0;
    for(uint8_t i = 0; i < n; ++i) {
        uint16_t elem;
        scanf("%" SCNu16, &elem);
        average += elem;
    }
    average /= n;
    double integral;
    printf("%" PRIu16, modf(average, &integral) <= 0.5 ? (uint16_t) integral : (uint16_t) integral + 1);
}
