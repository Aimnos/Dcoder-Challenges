#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    uint8_t* const necklace = malloc(N * sizeof(uint8_t));
    uint8_t smallest_pos = 0;
    for(uint8_t i = 0; i < N; ++i) {
        scanf("%" SCNu8, &necklace[i]);
        if(necklace[i] < necklace[smallest_pos])
            smallest_pos = i;
    }
    printf("%" PRIu8, necklace[smallest_pos]);
    necklace[smallest_pos] = necklace[0];
    for(uint8_t i = N; i > 1; --i) {
        smallest_pos = 1;
        for(uint8_t j = 2; j < i; ++j)
            if(necklace[j] < necklace[smallest_pos])
                smallest_pos = j;

        printf(" %" PRIu8, necklace[smallest_pos]);
        necklace[smallest_pos] = necklace[i - 1];
    }
    free(necklace);
}
