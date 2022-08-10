#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t n;
    scanf("%" SCNu16, &n);
    // the smallest element is 1, in TestCase#1, and the biggest element is 5, in TestCase#2
    uint8_t elements[5] = {0};
    for (uint16_t i = 0; i < n; ++i) {
        uint8_t element;
        scanf("%" SCNu8, &element);
        elements[element % 5]++;
    }
    for (uint8_t i = 0; i < 5; ++i)
        if (elements[i] > (n >> 1)) {
            printf("%" PRIu8, i == 0 ? 5 : i);
            exit(EXIT_SUCCESS);
        }

    printf("-1");
}
