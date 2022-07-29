#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    for(char ch = getchar(); !iscntrl(ch); ch = getchar()) {
        if(isalpha(ch))
            printf("%c", isupper(ch) ? tolower(ch) : toupper(ch));
        else
            printf("%c", ch);
    }
}
