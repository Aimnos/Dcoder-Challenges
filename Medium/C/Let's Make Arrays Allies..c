#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    const int32_t arg1 = *(const int32_t*)a;
    const int32_t arg2 = *(const int32_t*)b;

    if (arg1 < arg2)
        return -1;

    if (arg1 > arg2)
        return 1;

    return 0;
}

int main() {
    uint8_t n, k;
    scanf("%" SCNu8 " %" SCNu8, &n, &k);
    // Even though the problem states that all elements are positive, using uint32_t fails for TestCase#0
    int32_t* a = malloc(n * sizeof(int32_t));
    for (uint8_t i = 0; i < n; ++i)
        scanf("%" SCNd32, &a[i]);

    qsort(a, n, sizeof(int32_t), cmp);
    printf("%" PRId32, a[n - k]);
    free(a);
}
