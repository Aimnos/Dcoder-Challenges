#include <ctype.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    getchar();

    // delete the most significant digit that is smaller than its less significant neighbor
    // if there is no such digit, delete the least significant one
    for (uint8_t i = 0; i < T; ++i) {
        bool deleted = false;
        char prev = getchar();
        for (char ch = getchar(); isdigit(ch); ch = getchar()) {
            if (deleted)
                printf("%c", prev);
            else {
                if (ch > prev)
                    deleted = true;
                else
                    printf("%c", prev);
            }

            prev = ch;
        }
        if (deleted)
            printf("%c", prev);

        printf("\n");
    }
}
