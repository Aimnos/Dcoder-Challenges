#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char prev = getchar();
    uint16_t count = 1;
    for(char ch = getchar(); isdigit(ch); ch = getchar()) {
        if(ch != prev) {
            prev = ch;
            count = 1;
        } else if(++count >= 6) {
            printf("Bad");
            exit(EXIT_SUCCESS);
        }
    }
    printf("Good");
}
