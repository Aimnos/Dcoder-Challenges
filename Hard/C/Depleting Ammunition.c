#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    const uint32_t arg1 = *(const uint32_t*)a;
    const uint32_t arg2 = *(const uint32_t*)b;

    if (arg1 < arg2)
        return -1;

    if (arg1 > arg2)
        return 1;

    return 0;
}

int main() {
    uint32_t n, k;
    scanf("%" SCNu32 " %" SCNu32, &n, &k);
    uint32_t* const x = malloc(n * sizeof(uint32_t));
    for (uint32_t i = 0; i < n; ++i)
        scanf("%" SCNu32, &x[i]);

    qsort(x, n, sizeof(uint32_t), cmp);
    uint32_t bombs = 1;
    uint32_t drop = x[0];
    uint32_t low = x[0];
    for (uint32_t i = 1; i < n; ++i) {
        if (x[i] > low + k) {
            if (x[i] > drop + k) {
                drop = low = x[i];
                ++bombs;
            }
        } else
            drop = x[i];
    }
    printf("%" PRIu32, bombs);
    free(x);
}
