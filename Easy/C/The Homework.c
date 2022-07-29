#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        uint8_t K;
        scanf("%" SCNu8, &K);
        uint8_t* const digits = malloc(K * sizeof(uint8_t));
        uint8_t biggest_pos = 0;
        for(uint8_t j = 0; j < K; ++j) {
            scanf("%" SCNu8, &digits[j]);
            if(digits[j] > digits[biggest_pos])
                biggest_pos = j;
        }
        printf("%" PRIu8, digits[biggest_pos]);
        digits[biggest_pos] = digits[0];
        for(uint8_t j = K; j > 1; --j) {
            biggest_pos = 1;
            for(uint8_t k = 2; k < j; ++k)
                if(digits[k] > digits[biggest_pos])
                    biggest_pos = k;

            printf("%" PRIu8, digits[biggest_pos]);
            digits[biggest_pos] = digits[j - 1];
        }
        printf("\n");
        free(digits);
    }
}
