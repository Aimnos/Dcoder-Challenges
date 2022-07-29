#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    if(n == 0 || n == 1)
        printf("1");
    else {
        uint32_t factorial = 1;
        for(uint8_t x = 2; x <= n; ++x)
            factorial *= x;

        printf("%" PRIu32, factorial);
    }
}
