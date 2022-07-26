#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    uint16_t A;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        scanf("%" SCNu16, &A);
        printf("%s\n", A % 2 == 0 ? "Yes" : "No");
    }
    return 0;
}
