#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t M, n;
    scanf("%" SCNu8 " %" SCNu8, &M, &n);
    if (n == 0)
        printf("1");
    else {
        uint64_t x = M, y = 1;
        while (n > 1) {
            if (n % 2 == 1)
                y *= x;

            n >>= 1;
            x *= x;
        }
        printf("%" PRIu64, x * y);
    }
}
