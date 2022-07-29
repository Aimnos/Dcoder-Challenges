#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    printf("%" PRIu16, n * (n - 1));
}
