#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    char s[101];
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        scanf(" %[^\n]", s);
        for(uint8_t j = 0; s[j] != 0; ++j)
            printf("%c", toupper(s[j]));

        printf("\n");
    }
    return 0;
}
