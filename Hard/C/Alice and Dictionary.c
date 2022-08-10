#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint8_t search_for_substring(
    const char* const string,
    char** const words,
    const uint16_t size,
    const uint8_t first
) {
    uint8_t highest = first;
    for (uint16_t i = 0; i < size; ++i)
        if (string == strstr(string, words[i])) {
            const uint8_t count = search_for_substring(
                string + strlen(words[i]),
                words,
                size,
                first + 1
            );
            if (count > highest)
                highest = count;
        }

    if (strlen(string) != 0 && highest == first)
        --highest;

    return highest;
}

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        char N[1501];
        uint16_t L;
        scanf("%s\n%" SCNu16, N, &L);
        char** const words = malloc(L * sizeof(char*));
        for (uint16_t j = 0; j < L; ++j) {
            words[j] = malloc(1501 * sizeof(char));
            scanf("%s", words[j]);
        }
        printf("%" PRIu8 "\n", search_for_substring(N, words, L, 0));
        for (uint16_t j = 0; j < L; ++j)
            free(words[j]);

        free(words);
    }
}
