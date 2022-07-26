#include <inttypes.h>
#include <stdio.h>

int main() {
    char binary[15];
    scanf("%s", binary);
    uint16_t count = 0;
    uint8_t digit = 0;
    for(uint8_t i = 0; binary[i] != 0; ++i) {
        if(binary[i] == digit)
            ++count;
        else {
            digit = binary[i];
            count = 1;
        }
        if(count >= 6) {
            printf("Bad");
            return 0;
        }
    }
    printf("Good");
    return 0;
}
