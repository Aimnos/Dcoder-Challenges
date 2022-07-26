#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint32_t m, n;
    scanf("%" SCNu32 " %" SCNu32, &m, &n);
    bool* composites = (bool*) calloc(n - m + 1, sizeof(bool));
    for(uint32_t x = 2; x <= n; ++x) {
        if(x >= m)
            if(!composites[x - m])
                printf("%" PRIu32 "\n", x);

        for(uint32_t i = (x - m % x) % x; i <= n - m; i += x)
            composites[i] = true;
    }
    free(composites);
    return 0;
}
