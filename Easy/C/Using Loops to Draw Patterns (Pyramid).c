#include <inttypes.h>
#include <stdio.h>

int main() {
    for(uint8_t i = 0; i < 5; ++i) {
        for(uint8_t j = i; j < 4; ++j)
            printf(" ");

        for(uint8_t j = 0; j < i; ++j)
            printf("**");

        printf("*\n");
    }
    return 0;
}
