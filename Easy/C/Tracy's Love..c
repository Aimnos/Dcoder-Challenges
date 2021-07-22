#include <stdio.h>

int main() {
    unsigned char a, b;
    scanf("%hhu %hhu", &a, &b);
    if(a + b == 6 || abs(a - b) == 6)
        printf("Love");
    else
        printf("Hate");

    return 0;
}