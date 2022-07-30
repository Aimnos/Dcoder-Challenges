#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    char ch = getchar();
    while (!isalnum(ch)) {
        ch = getchar();
    }
    printf("%c%c%c", ch, ch, ch);
    for (uint8_t i = 0; i < N; ++i) {
        ch = getchar();
        printf("%c%c%c", ch, ch, ch);
    }
}
