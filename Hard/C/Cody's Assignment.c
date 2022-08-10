#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint16_t N;
    uint32_t Q;
    scanf("%" SCNu16 " %" SCNu32, &N, &Q);
    char* const S = malloc((N + 1) * sizeof(char));
    scanf("%s", S);
    for (uint32_t i = 0; i < Q; ++i) {
        uint16_t L, R;
        scanf("%" SCNu16 " %" SCNu16, &L, &R);
        uint16_t smallest = S[L - 1];
        for (uint16_t j = L; j < R; ++j)
            if (S[j] < smallest)
                smallest = S[j];

        printf("%c\n", smallest);
    }
    free(S);
}
