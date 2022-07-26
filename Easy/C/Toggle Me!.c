#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    char string[16];
    scanf("%s", string);
    for(uint8_t i = 0; string[i] != 0; ++i) {
        if(isalpha(string[i]))
            printf("%c", isupper(string[i]) ? tolower(string[i]) : toupper(string[i]));
        else
            printf("%c", string[i]);
    }
    return 0;
}
