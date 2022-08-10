#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    int16_t* const A = malloc(N * sizeof(int16_t));
    for (uint8_t i = 0; i < N; ++i)
        scanf("%" SCNd16, &A[i]);

    uint8_t max_subarray_start = 0, max_subarrray_end = 0, max_subarray_sum = 0,
            start = 0, sum = 0;
    for (uint8_t i = 0; i < N; ++i) {
        const int16_t elem = A[i];
        if (elem >= 0)
            sum += elem;
        else {
            if (max_subarray_sum < sum) {
                max_subarray_sum = sum;
                max_subarray_start = start;
                max_subarrray_end = i;
            }
            sum = 0;
            while (++i < N)
                if (A[i] >= 0)
                    break;

            start = i;
        }
    }
    if (max_subarray_sum < sum
        || (max_subarray_sum == sum
            && N - start > max_subarrray_end - max_subarray_start)) {
        max_subarray_start = start;
        max_subarrray_end = N;
    }
    for (uint8_t i = max_subarray_start; i < max_subarrray_end; ++i)
        printf("%" PRIu8 " ", A[i]);

    free(A);
}
