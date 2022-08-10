#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t n;
        scanf("%" SCNu32, &n);
        uint32_t* const H = malloc(n * sizeof(uint32_t));
        for (uint32_t j = 0; j < n; ++j) {
            scanf("%" SCNu32, &H[j]);
            uint32_t K = 0, k = j;
            while (k > 0) {
                if (H[j] < H[--k])
                    break;

                ++K;
            }
            printf("%" PRIu32 " ", K);
        }
        free(H);
    }
}
