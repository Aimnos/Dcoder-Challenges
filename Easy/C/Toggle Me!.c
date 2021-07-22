#include <stdio.h>

int main() {
    unsigned char string[16];
    scanf("%s", string);
    for(unsigned char i = 0; string[i] != 0; i++)
        printf("%c", string[i] + 32 * (string[i] > 64) - 64 * (string[i] > 96));

    return 0;
}