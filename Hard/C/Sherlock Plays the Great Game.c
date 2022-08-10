#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    for (uint16_t i = 0; i < T; ++i) {
        uint16_t N;
        scanf("%" SCNu16, &N);
        uint32_t xor = 0;
        for (uint16_t j = 0; j < N; ++j) {
            uint32_t Ai;
            scanf("%" SCNu32, &Ai);
            xor ^= Ai;
        }
        if ((N % 2 == 0) || (xor == 0))
            printf("Sherlock\n");
        else
            printf("Watson\n");
    }
}
