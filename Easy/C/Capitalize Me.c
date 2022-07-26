#include <ctype.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    char s[101];
    fgets(s, 101, stdin);
    bool capitalize = true;
    for(uint8_t i = 0; s[i] != '\n'; ++i) {
        printf("%c", capitalize ? toupper(s[i]) : s[i]);
        capitalize = isspace(s[i]);
    }
}
