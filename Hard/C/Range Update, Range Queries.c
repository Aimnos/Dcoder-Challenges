#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N, Q;
    scanf("%" SCNu16 " %" SCNu16, &N, &Q);
    uint16_t* A = malloc(N * sizeof(uint16_t));
    for(uint16_t i = 0; i < N; ++i)
        scanf("%" SCNu16, &A[i]);

    for(uint16_t i = 0; i < Q; ++i) {
        uint8_t q;
        uint16_t l, r;
        scanf("%" SCNu8 " %" SCNu16 " %" SCNu16, &q, &l, &r);
        if(q == 1) {
            uint16_t min = UINT16_MAX;
            for(uint16_t j = l - 1; j < r - 1; ++j)
                if(A[j] < min)
                    min = A[j];

            printf("%" PRIu16 "\n", min);
        } else {
            uint16_t p;
            scanf("%" SCNu16, &p);
            for(uint16_t j = l - 1; j < r - 1; ++j)
                A[j] += p;
        }
    }
    free(A);
}
