#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t N;
        uint8_t B;
        scanf("%" SCNu32 " %" SCNu8, &N, &B);
        uint32_t x = B;
        while (x <= N)
            x *= B;

        x /= B;
        while (x > 1) {
            const uint8_t digit = N / x;
            printf("%c", digit > 9 ? digit - 10 + 'A' : digit + '0');
            N -= x * digit;
            x /= B;
        }
        printf("%c\n", N > 9 ? N - 10 + 'A' : N + '0');
    }
}
