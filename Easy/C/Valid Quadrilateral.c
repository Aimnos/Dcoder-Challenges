#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        uint16_t A, B, C, D;
        scanf("%" SCNu16 " %" SCNu16 " %" SCNu16 " %" SCNu16, &A, &B, &C, &D);
        printf("%s\n", A + B + C + D == 360 ? "YES" : "NO");
    }
}
