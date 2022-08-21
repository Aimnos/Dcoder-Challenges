#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N, k;
    scanf("%" SCNu16 " %" SCNu16, &N, &k);
    int16_t* marks = malloc(k * sizeof(int16_t));
    int32_t sum = 0;
    for (uint16_t i = 0; i < k; ++i) {
        scanf("%" SCNd16, &marks[i]);
        sum += marks[i];
    }
    int32_t highest = sum;
    for (uint16_t i = k; i < N; ++i) {
        const uint16_t index = i % k;
        sum -= marks[index];
        scanf("%" SCNd16, &marks[index]);
        sum += marks[index];
        if (sum > highest)
            highest = sum;
    }
    printf("%" PRId32, highest);
    free(marks);
}
