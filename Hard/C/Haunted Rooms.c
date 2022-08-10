#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N, M;
    scanf("%" SCNu8 " %" SCNu8, &N, &M);
    bool* const unsafe = calloc(M, sizeof(bool));
    uint8_t cost = 0;
    for (uint16_t i = 0; i < N; ++i)
        for (uint16_t j = 0; j < M; ++j) {
            uint8_t room;
            scanf("%" SCNu8, &room);
            if (!unsafe[j]) {
                if (room == 0)
                    unsafe[j] = true;

                cost += room;
            }
        }

    printf("%" PRIu8, cost);
    free(unsafe);
}
