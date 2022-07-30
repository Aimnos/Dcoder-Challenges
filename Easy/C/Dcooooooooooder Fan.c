#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    printf("Dc");
    for (uint8_t i = 0; i < n; ++i)
        printf("o");

    printf("der");
}
