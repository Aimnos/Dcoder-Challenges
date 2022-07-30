#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    for (char c = 'a' - 1 + N; c >= 'a'; --c)
        printf("%c", c);
}
