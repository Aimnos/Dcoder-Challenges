#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    int8_t prev;
    scanf("%" SCNd8, &prev);
    bool decreasing = true;
    for (uint8_t i = 1; i < n; ++i) {
        int8_t si;
        scanf("%" SCNd8, &si);
        if (decreasing) {
            if (si >= prev)
                decreasing = false;

        } else if (si <= prev) {
            printf("No");
            exit(EXIT_SUCCESS);
        }
        prev = si;
    }
    printf("Yes");
}
