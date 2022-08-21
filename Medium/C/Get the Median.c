#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    uint16_t* a = malloc(N * sizeof(uint16_t));
    for (uint8_t i = 0; i < N; ++i) {
        uint16_t elem;
        scanf("%" SCNu16, &elem);
        uint8_t j = i;
        while (j > 0 && a[j - 1] > elem) {
            a[j] = a[j - 1];
            --j;
        }
        a[j] = elem;
    }
    printf("%" PRIu16, N % 2 == 1 ? a[N >> 1] : a[(N >> 1) - 1]);
    free(a);
}
