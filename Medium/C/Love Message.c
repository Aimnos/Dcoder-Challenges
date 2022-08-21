#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    for (uint16_t i = 0; i < T; ++i) {
        char S[1001];
        scanf("%s", S);
        const uint16_t len = strlen(S);
        uint16_t overhead = 0;
        for (uint16_t j = 0; j < len; ++j)
            overhead += S[j] - 'a' + 1;

        printf("%" PRIu16 "\n", overhead);
    }
}
