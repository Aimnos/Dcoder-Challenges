#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

uint32_t* const first_longest_increasing_subsequence(
    const uint32_t* const sequence,
    const uint16_t len,
    uint16_t* const sub_len
) {
    *sub_len = 0;
    if (len == 0)
        return NULL;

    uint16_t* const prev = malloc(len * sizeof(uint16_t));
    uint16_t* const indexes = malloc(len * sizeof(uint16_t));
    uint16_t i = len;
    while (i > 0) {
        const uint32_t elem = sequence[--i];
        uint16_t left = 0;
        uint16_t right = *sub_len;
        while (left < right) {
            const uint16_t mid = (left + right) >> 1;
            if (sequence[indexes[mid]] < elem)
                right = mid;
            else
                left = mid + 1;
        }
        if (left > 0)
            prev[i] = indexes[left - 1];
        else
            prev[i] = 0;

        if (left < (*sub_len))
            indexes[left] = i;
        else
            indexes[(*sub_len)++] = i;
    }
    uint32_t* const subsequence = malloc((*sub_len) * sizeof(uint32_t));
    i = indexes[(*sub_len) - 1];
    for (uint16_t j = 0; j < *sub_len; ++j) {
        subsequence[j] = sequence[i];
        i = prev[i];
    }
    free(indexes);
    free(prev);
    return subsequence;
}

int main() {
    uint16_t n;
    scanf("%" SCNu16, &n);
    uint32_t* const sequence = malloc(n * sizeof(uint32_t));
    for (uint16_t i = 0; i < n; ++i)
        scanf("%" SCNu32, &sequence[i]);

    uint16_t len;
    uint32_t* const subsequence =
        first_longest_increasing_subsequence(sequence, n, &len);

    for (uint16_t i = 0; i < len; ++i)
        printf("%" PRIu32 " ", subsequence[i]);

    free(subsequence);
    free(sequence);
}
