#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t n;
    int16_t k;
    scanf("%" SCNu8 " %" SCNd16, &n, &k);
    int8_t* a = malloc(n * sizeof(int8_t));
    for (uint8_t i = 0; i < n; ++i) {
        scanf("%" SCNd8, &a[i]);
        const int8_t elem = a[i];
        for (uint8_t j = 0; j < i; ++j)
            if (elem + a[j] == k) {
                printf("Yes");
                goto found;
            }
    }
    printf("No");
found:
    free(a);
}
