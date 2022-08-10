#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    int16_t* const shoes = calloc(99, sizeof(int16_t));
    uint16_t pairs = 0;
    for (uint16_t i = 0; i < N; ++i) {
        uint8_t size;
        char side;
        scanf("%" SCNu8 " %c", &size, &side);
        switch (side) {
            case 'L':
                if (shoes[size - 1] > 0)
                    ++pairs;

                --shoes[size - 1];
                break;
            case 'R':
                if (shoes[size - 1] < 0)
                    ++pairs;

                ++shoes[size - 1];
                break;
        }
    }
    printf("%" PRIu16, pairs);
    free(shoes);
}
