#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    uint16_t* const A = malloc(N * sizeof(uint16_t));
    uint8_t i = 0;
    while(i < N)
        scanf("%" SCNu16, &A[i++]);

    printf("%" PRIu16, A[--i]);
    while(i > 0)
        printf(" %" PRIu16, A[--i]);

    free(A);
}
