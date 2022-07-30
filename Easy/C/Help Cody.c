#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    int16_t* const A = malloc(N * sizeof(int16_t));
    uint8_t biggest_pos = 0;
    for (uint8_t i = 0; i < N; ++i) {
        scanf("%" SCNd16, &A[i]);
        if (A[i] > A[biggest_pos])
            biggest_pos = i;
    }
    printf("%" PRId16, A[biggest_pos]);
    A[biggest_pos] = A[0];
    for (uint8_t i = N; i > 1; --i) {
        biggest_pos = 1;
        for (uint8_t j = 2; j < i; ++j)
            if (A[j] > A[biggest_pos])
                biggest_pos = j;

        printf(" %" PRId16, A[biggest_pos]);
        A[biggest_pos] = A[i - 1];
    }
    free(A);
}
