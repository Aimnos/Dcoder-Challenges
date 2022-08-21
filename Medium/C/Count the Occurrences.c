#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    uint16_t* A = malloc(N * sizeof(uint16_t));
    for (uint16_t i = 0; i < N; ++i)
        scanf("%" SCNu16, &A[i]);

    uint16_t Q;
    scanf("%" SCNu16, &Q);
    for (uint16_t i = 0; i < Q; ++i) {
        uint16_t x;
        scanf("%" SCNu16, &x);
        uint16_t occurences = 0;
        for (uint16_t j = 0; j < N; ++j)
            if (A[j] == x)
                ++occurences;

        printf("%" PRId16 "\n", occurences == 0 ? -1 : occurences);
    }
    free(A);
}
