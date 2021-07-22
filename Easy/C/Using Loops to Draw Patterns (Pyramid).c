#include <stdio.h>

int main() {
    for(unsigned char i = 0; i < 5; i++) {
        for(unsigned j = i; j < 4; j++)
            printf(" ");

        for(unsigned char j = 0; j < i; j++)
            printf("**");

        printf("*\n");
    }
    return 0;
}