#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t n;
    scanf("%" SCNu16, &n);
    printf("%" PRIu16, 10000 / n);
    return 0;
}
