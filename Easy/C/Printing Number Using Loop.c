#include <inttypes.h>
#include <stdio.h>

int main() {
    for(uint8_t i = 1; i <= 10; ++i)
        printf("%" PRIu8 "\n", i);

    return 0;
}
