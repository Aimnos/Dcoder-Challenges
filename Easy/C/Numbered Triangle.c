#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    for(uint8_t i = 1; i <= N; ++i) {
        for(uint8_t j = 1; j < i; ++j)
            printf("%" PRIu8 " ", j);

        printf("%" PRIu8 "\n", i);
    }
    return 0;
}
