#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    for (uint16_t i = 0; i < T; ++i) {
        uint8_t N, R;
        scanf("%" SCNu8 " %" SCNu8, &N, &R);

        // solution is N - 1 choose R - 1
        if (N < R)
            printf("0\n");
        else {
            uint16_t nCr = 1;
            uint8_t i = 1;
            while (i < R) {
                nCr *= N - i;
                nCr /= i++;
            }
            printf("%" PRIu16 "\n", nCr);
        }
    }
}
