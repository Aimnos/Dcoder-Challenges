#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    char string[1001];
    fgets(string, 1001, stdin);
    uint16_t vowels = 0;
    for(uint16_t i = 0; string[i] != 0; ++i) {
        switch(string[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowels;
                break;
        }
    }
    printf("%" PRIu16, vowels);
    return 0;
}
