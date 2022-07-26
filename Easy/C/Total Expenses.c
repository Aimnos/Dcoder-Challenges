#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    uint32_t total_cost;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        scanf("%" SCNu32, &total_cost);
        if(total_cost > 1000)
            printf("%.2lf\n", (double) total_cost * 0.9);
        else
            printf("%" PRIu32 ".00\n", total_cost);
    }
    return 0;
}
