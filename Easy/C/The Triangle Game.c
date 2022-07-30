#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    char input[21];
    scanf("%s", input);
    uint8_t len = strlen(input);
    for (uint8_t i = 0; i < len; ++i) {
        for (uint8_t j = 0; j <= i; ++j)
            printf("%c", input[j]);

        printf("\n");
    }
}
