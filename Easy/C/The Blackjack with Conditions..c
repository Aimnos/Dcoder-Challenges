#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b;
    scanf("%" SCNu8 "%" SCNu8, &a, &b);
    if(a + b > 21) {
        if(a == 11 || b == 11)
            printf("%" PRIu8, a + b - 10);
        else
            printf("0");
    } else
        printf("%" PRIu8, a + b);
    return 0;
}
