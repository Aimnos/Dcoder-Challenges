#include <inttypes.h>
#include <stdio.h>

int main() {
    char input[21];
    scanf("%s", input);
    for(uint8_t i = 0; input[i] != 0; ++i) {
        for(uint8_t j = 0; j <= i; ++j)
            printf("%c", input[j]);

        printf("\n");
    }
    return 0;
}
