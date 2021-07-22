#include <stdio.h>

int main() {
    unsigned char N;
    scanf("%hhu", &N);
    for(unsigned char i = N; i > 0; i--)
        printf("%c", i + 96);

    return 0;
}