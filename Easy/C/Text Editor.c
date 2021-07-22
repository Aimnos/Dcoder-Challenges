#include <stdio.h>

int main() {
    unsigned char T;
    char s[101];
    scanf("%hhu", &T);
    for(unsigned char i = 0; i < T; i++) {
        scanf(" %[^\n]", s);
        unsigned char j = 0;
        while(s[j] != 0)
            s[j++] -= 32;

        printf("%s\n", s);
    }
    return 0;
}