#include <inttypes.h>
#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);
    for(uint8_t i = 0; s[i] != 0; ++i)
        printf("%c", s[i] + 1);

    return 0;
}
