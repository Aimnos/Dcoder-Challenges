#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    char n[6];
    scanf("%s", n);
    uint8_t i = strlen(n);
    while(n[--i] == '0') {
    }
    while(i > 0)
        printf("%c", n[i--]);

    printf("%c", n[0]);
}
