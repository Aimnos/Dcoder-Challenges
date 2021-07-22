#include <stdbool.h>
#include <stdio.h>

int main() {
    unsigned char s[101];
    scanf("%[^\n]", s);
    bool capitalize = true;
    for(unsigned char i = 0; s[i] != 0; i++) {
        printf("%c", s[i] - 32 * (capitalize && s[i] > 96));
        capitalize = s[i] == ' ';
    }
    return 0;
}