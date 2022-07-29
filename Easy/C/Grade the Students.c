#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        uint8_t Mathematics, Algorithms;
        scanf("%" SCNu8 " %" SCNu8, &Mathematics, &Algorithms);
        printf("%s\n", Mathematics > 70 && Algorithms > 50 ? "Pass" : "Fail");
    }
}
