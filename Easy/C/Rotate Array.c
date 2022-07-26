#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint64_t N, K;
    scanf("%" SCNu64 " %" SCNu64, &N, &K);
    uint64_t* Arr = (uint64_t*) malloc(N * sizeof(int64_t));
    for(uint64_t i = 0; i < N; ++i)
        scanf("%" SCNu64, &Arr[i]);

    printf("%" PRIu64, Arr[N - K]);
    for(uint64_t i = 1; i < N; ++i)
        printf(" %" PRIu64, Arr[(N - K + i) % N]);

    free(Arr);
    return 0;
}
