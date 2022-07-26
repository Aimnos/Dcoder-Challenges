#include <inttypes.h>
#include <stdio.h>

int main() {
    uint64_t N;
    scanf("%" SCNu64, &N);
    printf("%" PRIu64, N / 3);
    return 0;
}
