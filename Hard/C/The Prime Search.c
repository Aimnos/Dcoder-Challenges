#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    bool composites[2750158] = {false};
    for (uint16_t i = 0; i < 1657; ++i)
        if (!composites[i])
            for (uint32_t j = (i + 2) * (i + 2) - 2; j < 2750158; j += i + 2)
                composites[j] = true;

    uint8_t n;
    scanf("%" SCNu8, &n);
    for (uint8_t i = 0; i < n; ++i) {
        uint32_t index;
        scanf("%" SCNu32, &index);
        for (uint32_t j = 0; j < 2750158; ++j)
            if (!composites[j])
                if (--index == 0) {
                    printf("%" PRIu32 " ", j + 2);
                    break;
                }
    }
}
