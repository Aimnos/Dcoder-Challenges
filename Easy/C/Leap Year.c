#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        uint32_t Year;
        scanf("%" SCNu32, &Year);
        printf("%s\n", Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0) ? "Yes" : "No");
    }
    return 0;
}
