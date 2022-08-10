#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t m;
    scanf("%" SCNu8, &m);
    uint32_t* array = malloc(m * sizeof(uint32_t));
    for (uint8_t i = 0; i < m; ++i)
        scanf("%" SCNu32, &array[i]);

    uint8_t n;
    scanf("%" SCNu8, &n);
    array = realloc(array, (m + n) * sizeof(uint32_t));
    for (uint8_t i = m; i < m + n; ++i)
        scanf("%" SCNu32, &array[i]);

    uint8_t k;
    scanf("%" SCNu8, &k);
    for (uint8_t i = 0; i < k; ++i) {
        uint8_t smallest_pos = i;
        for (uint8_t j = i + 1; j < m + n; ++j)
            if (array[j] < array[smallest_pos])
                smallest_pos = j;

        array[smallest_pos] = array[i];
    }
    printf("%" PRIu32, array[k - 1]);
    free(array);
}
