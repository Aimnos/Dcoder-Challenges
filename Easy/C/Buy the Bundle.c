#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint8_t N;
        uint32_t M;
        scanf("%" SCNu8 " %" SCNu32, &N, &M);
        printf("%s\n", M % N == 0 ? "Yes" : "No");
    }
}
