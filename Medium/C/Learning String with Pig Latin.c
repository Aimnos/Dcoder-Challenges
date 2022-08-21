#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    // TestCase#2 has the longest string, with length 6
    char word[7];
    scanf("%s", word);
    const uint8_t len = strlen(word);
    switch (word[0]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%sway", word);
            break;
        default:
            for (uint8_t i = 1; i < len; ++i)
                printf("%c", word[i]);

            printf("%cay", word[0]);
    }
}
