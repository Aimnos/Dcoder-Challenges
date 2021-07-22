#include <stdio.h>

int main() {
    unsigned char binary[8], *ptr;
    scanf("%s", binary);
    printf("%hhu", strtol(binary, &ptr, 2));
    return 0;
}