#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    uint8_t N;
    int8_t number;
    scanf("%" SCNu8 " %" SCNd8, &N, &number);
    getchar();
    float* const r = malloc(N * sizeof(float));
    char** const list = malloc(N * sizeof(char*));
    for (uint8_t i = 0; i < N; ++i) {
        list[i] = malloc(105 * sizeof(char));
        fgets(list[i], 106, stdin);
        sscanf(strrchr(list[i], ' '), "%f", &r[i]);
    }
    for (uint8_t i = 0; i < N; ++i) {
        uint8_t next = 0;
        for (uint8_t j = 1; j < N; ++j)
            if (number * r[j] > number * r[next])
                next = j;

        printf("%s", list[next]);
        free(list[next]);
        r[next] = -11 * number;
    }
    free(r);
    free(list);
}
