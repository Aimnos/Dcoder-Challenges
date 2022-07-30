#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t T;
    scanf("%" SCNu8, &T);
    for (uint8_t i = 0; i < T; ++i) {
        char ch = getchar();
        while (iscntrl(ch)) {
            ch = getchar();
        }
        while (!iscntrl(ch)) {
            printf("%c", toupper(ch));
            ch = getchar();
        }

        printf("\n");
    }
}
