#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint16_t N;
        scanf("%" SCNu16, &N);
        uint16_t* const arr = malloc(N * sizeof(uint16_t));
        for (uint16_t j = 0; j < N; ++j)
            scanf("%" SCNu16, &arr[j]);

        uint16_t location, destination;
        scanf("%" SCNu16 " %" SCNu16, &location, &destination);
        for (uint16_t j = 0; j < N; ++j) {
            if (location == destination) {
                printf("Yes\n");
                goto can_reach;
            }
            location = arr[location - 1];
        }
        printf("No\n");

    can_reach:
        free(arr);
    }
}
