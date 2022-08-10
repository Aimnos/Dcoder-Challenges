#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint16_t N;
        scanf("%" SCNu16, &N);
        uint16_t* const array = malloc(N * sizeof(uint16_t));
        for (uint16_t j = 0; j < N; ++j)
            scanf("%" SCNu16, &array[j]);

        if (N == 1) {
            printf("Yes\n");
            goto balanced;
        }
        int32_t difference;
        for (uint16_t j = 1; j < N - 1; ++j) {
            difference = 0;
            for (uint16_t k = 0; k < j; ++k)
                difference += array[k];

            for (uint16_t k = j + 1; k < N; ++k)
                difference -= array[k];

            if (difference == 0) {
                printf("Yes\n");
                goto balanced;
            }
        }
        printf("No\n");
    balanced:
        free(array);
    }
}
