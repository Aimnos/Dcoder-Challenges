#include <stdio.h>

int main() {
    unsigned char input[21];
    scanf("%s", input);
    for(unsigned char i = 0; i < 21; i++) {
        if(input[i] == 0)
            break;

        for(unsigned char j = 0; j <= i; j++)
            printf("%c", input[j]);

        printf("\n");
    }
    return 0;
}