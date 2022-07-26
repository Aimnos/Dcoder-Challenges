#include <ctype.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    uint8_t count = 0, letters[26] = {0};
    char S[101];
    scanf(" %s", S);
    for(uint8_t i = 0; S[i] != 0; ++i) {
        uint8_t j = tolower(S[i]) - 'a';
        count += 1 - letters[j];
        letters[j] = 1;
    }
    printf("%s", count == 26 ? "YES" : "NO");
    return 0;
}
