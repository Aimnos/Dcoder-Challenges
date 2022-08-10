#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    uint32_t* const X = malloc(N * sizeof(uint32_t));
    uint32_t* const Y = malloc(N * sizeof(uint32_t));
    for (uint16_t i = 0; i < N; ++i)
        scanf("%" SCNu32 " %" SCNu32, &X[i], &Y[i]);

    uint16_t max_happy = 0;
    uint32_t min_books = 0;
    for (uint16_t i = 0; i < N; ++i) {
        uint16_t happy = 0;
        const uint32_t books = X[i];
        for (uint16_t j = 0; j < N; ++j)
            if (books >= X[j] && books <= Y[j])
                ++happy;

        if (happy > max_happy || (happy == max_happy && books < min_books)) {
            max_happy = happy;
            min_books = books;
        }
    }
    printf("%" PRIu32 " %" PRIu16, min_books, max_happy);
    free(Y);
    free(X);
}
