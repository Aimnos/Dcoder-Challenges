#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    int8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        char S1[100001], S2[100001];
        scanf("%s %s", S1, S2);
        int32_t letters[26] = {0};
        const uint8_t len = strlen(S1);
        if (len != strlen(S2)) {
            printf("NO\n");
            continue;
        }
        for (uint8_t j = 0; j < len; ++j) {
            letters[S1[j] - 'a']++;
            letters[S2[j] - 'a']--;
        }
        bool win = true;
        for (uint8_t j = 0; j < 26; ++j)
            if (letters[j] != 0) {
                win = false;
                break;
            }

        printf("%s\n", win ? "YES" : "NO");
    }
}
