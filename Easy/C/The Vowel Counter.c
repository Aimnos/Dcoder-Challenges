#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t vowels = 0;
    for(char ch = getchar(); !iscntrl(ch); ch = getchar()) {
        switch(ch) {
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
}
