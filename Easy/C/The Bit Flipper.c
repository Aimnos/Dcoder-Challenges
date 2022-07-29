#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    char bit;
    scanf("%c", &bit);
    while(!isspace(bit)) {
        printf("%" PRIu8, (bit - '0') ^ 1);
        scanf("%c", &bit);
    }
}
