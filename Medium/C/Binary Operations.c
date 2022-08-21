#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t a = 0, b = 0;
    for (char ch = getchar(); !isspace(ch); ch = getchar()) {
        a <<= 1;
        a += ch - '0';
    }
    for (char ch = getchar(); !isspace(ch); ch = getchar()) {
        b <<= 1;
        b += ch - '0';
    }
    const uint32_t sum = a + b;
    uint32_t mask = 0x80000000;
    while ((mask & sum) == 0 && mask > 0)
        mask >>= 1;

    if (mask == 0)
        printf("0\n");
    else {
        while (mask > 0) {
            printf("%c", (mask & sum) == 0 ? '0' : '1');
            mask >>= 1;
        }
        printf("\n");
    }
    const uint32_t product = a * b;
    mask = 0x80000000;
    while ((mask & product) == 0 && mask > 0)
        mask >>= 1;

    if (mask == 0)
        printf("0");
    else
        while (mask > 0) {
            printf("%c", (mask & product) == 0 ? '0' : '1');
            mask >>= 1;
        }
}
