#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(uint32_t x) {
    switch (x % 6) {
        case 1:
            if (x == 1)
                return false;

        case 5:
            for (uint32_t i = 5; i * i <= x; i += 6)
                if (x % i == 0 || x % (i + 2) == 0)
                    return false;

            return true;
        default:
            if (x == 2 || x == 3)
                return true;

            return false;
    }
}

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        uint32_t N;
        scanf("%" SCNu32, &N);
        uint32_t longest = 0;
        uint32_t current = 0;
        for (uint32_t j = 0; j < N; ++j) {
            uint32_t Ai;
            scanf("%" SCNu32, &Ai);
            if (is_prime(Ai))
                ++current;
            else {
                if (current > longest)
                    longest = current;

                current = 0;
            }
        }
        if (longest == 0)
            printf("-1\n");
        else
            printf("%" PRIu32 "\n", current > longest ? current : longest);
    }
}
