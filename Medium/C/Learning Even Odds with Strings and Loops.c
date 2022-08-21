#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint8_t t;
    scanf("%" SCNu8, &t);
    for (uint8_t i = 0; i < t; ++i) {
        char str[21];
        scanf("%s", str);
        const uint8_t len = strlen(str);
        for (uint8_t j = 0; j < len; j += 2)
            printf("%c", str[j]);

        printf(" ");
        for (uint8_t j = 1; j < len; j += 2)
            printf("%c", str[j]);

        printf("\n");
    }
}
