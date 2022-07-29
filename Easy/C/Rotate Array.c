#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint64_t N, K;
    scanf("%" SCNu64 " %" SCNu64, &N, &K);
    uint64_t* const Arr = malloc(N * sizeof(uint64_t));
    for(uint64_t i = 0; i < N; ++i)
        scanf("%" SCNu64, &Arr[i]);

    for(uint64_t i = N - K; i < N; ++i)
        printf("%" PRIu64 " ", Arr[i]);

    for(uint64_t i = 0; i < N - K; ++i)
        printf("%" PRIu64 " ", Arr[i]);

    free(Arr);
}
