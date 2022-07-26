#include <inttypes.h>
#include <stdio.h>

int main() {
    char string[101];
    scanf("%s", string);
    for(uint8_t i = 0; i < 101; ++i)
        if(string[i] == 0) {
            string[i / 2] = 0;
            printf("%s", string);
            return 0;
        }

    return 0;
}
