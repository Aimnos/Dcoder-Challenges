#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    const char arg1 = *(const char*)a;
    const char arg2 = *(const char*)b;

    if (arg1 < arg2)
        return -1;

    if (arg1 > arg2)
        return 1;

    return 0;
}

void permutate_recursive(
    char* const s,
    const uint8_t s_len,
    char* const new_s,
    const uint8_t new_len
) {
    if (s_len == 0) {
        new_s[new_len] = 0;
        printf("%s ", new_s);
        return;
    }
    for (uint8_t i = 0; i < s_len; ++i) {
        new_s[new_len] = s[i];
        for (uint8_t j = i; j < s_len - 1; ++j)
            s[j] = s[j + 1];

        permutate_recursive(s, s_len - 1, new_s, new_len + 1);
        for (uint8_t j = s_len - 1; j > i; --j)
            s[j] = s[j - 1];

        s[i] = new_s[new_len];
        const char accept[2] = {s[i], 0};
        i += strspn(&s[i], accept) - 1;
    }
}

void permutate(char* const s, const uint8_t len) {
    char* const new_s = malloc((len + 1) * sizeof(char));
    permutate_recursive(s, len, new_s, 0);
    free(new_s);
}

int main() {
    char string[21];
    scanf("%s", string);
    const uint8_t len = strlen(string);
    qsort(string, len, sizeof(char), cmp);
    permutate(string, len);
}
