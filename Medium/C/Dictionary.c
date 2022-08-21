#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pair {
    char key[21];
    uint8_t value;
} pair;

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    pair* dictionary = malloc(N * sizeof(pair));
    for (uint8_t i = 0; i < N; ++i)
        scanf("%s %" SCNu8, dictionary[i].key, &dictionary[i].value);

    uint8_t Q;
    scanf("%" SCNu8, &Q);
    for (uint8_t i = 0; i < Q; ++i) {
        char key[21];
        scanf("%s", key);
        for (uint8_t j = 0; j < N; ++j)
            if (strcmp(dictionary[j].key, key) == 0) {
                printf("%" PRIu8 "\n", dictionary[j].value);
                break;
            }
    }
    free(dictionary);
}
