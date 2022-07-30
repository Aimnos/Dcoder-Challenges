#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    char w[101];
    scanf("%s", w);
    bool hash_set[58] = {false};
    for (uint8_t i = 0; w[i] != 0; ++i)
        if (!hash_set[w[i] - 'A']) {
            hash_set[w[i] - 'A'] = true;
            printf("%c", w[i]);
        }
}
