#include <ctype.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    char S[101];
    scanf(" %s", S);
    bool letters[26] = {false};
    uint8_t count = 0;
    for (uint8_t i = 0; S[i] != 0; ++i) {
        const uint8_t j = tolower(S[i]) - 'a';
        if (!letters[j]) {
            ++count;
            letters[j] = true;
        }
    }
    printf("%s", count == 26 ? "YES" : "NO");
}
