#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t l, h, d;
    scanf("%" SCNu16 "%" SCNu16 "%" SCNu16, &l, &h, &d);
    printf("%" PRIu16, 1 + (h - (h % d) - l) / d);
}
