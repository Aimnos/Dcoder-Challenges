#include <inttypes.h>
#include <stdio.h>

int main() {
    uint32_t N;
    scanf("%" SCNu32, &N);
    int32_t M = 0;
    uint32_t lowestX = UINT32_MAX, highestC = 0;

    // M is the net cost of all the purchases
    for (uint32_t i = 0; i < N; ++i) {
        uint32_t Ci, Xi;
        scanf("%" SCNu32 " %" SCNu32, &Ci, &Xi);
        M += Ci - Xi;
        if (Xi < lowestX)
            lowestX = Xi;

        if (Ci > highestC)
            highestC = Ci;
    }

    // leave the item with the least amount of cashback for last => have to account for it
    M += lowestX;

    // you must have enough money to buy the most expensive item individually but also enough money for the rest
    if (M > highestC)
        printf("%" PRIu32, M);
    else
        printf("%" PRIu32, highestC);
}
