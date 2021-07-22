#include <stdio.h>

int main() {
    unsigned char string[101];
    scanf("%s", string);
    for(unsigned char i = 0; i < 101; i++)
        if(string[i] == 0) {
            string[i / 2] = 0;
            printf("%s", string);
            return 0;
        }

    return 0;
}