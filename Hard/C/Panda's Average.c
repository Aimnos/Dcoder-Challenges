#include <float.h>
#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    for (uint16_t i = 0; i < T; ++i) {
        uint16_t N;
        scanf("%" SCNu16, &N);
        int16_t* const A = malloc(N * sizeof(int16_t));
        for (uint16_t j = 0; j < N; ++j)
            scanf("%" SCNd16, &A[j]);

        if (N < 2) {
            printf("NO\n");
            goto cant_divide;
        }

        double smallest = DBL_MAX;
        for (uint16_t j = 1; j < N; ++j) {
            int32_t a1 = 0;
            int32_t a2 = 0;
            for (uint16_t k = 0; k < j; ++k)
                a1 += A[k];

            for (uint16_t k = j; k < N; ++k)
                a2 += A[k];

            double difference = fabs((double)a1 / j - (double)a2 / (N - j));
            if (difference < smallest)
                smallest = difference;
        }
        printf("%.2lf\n", smallest);

    cant_divide:
        free(A);
    }
}
