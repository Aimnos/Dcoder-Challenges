#include <stdio.h>

int main() {
    unsigned char binary[15];
    scanf("%s", binary);
    unsigned short count = 0;
    unsigned char digit = 0;
    for(unsigned char i = 0; binary[i] != 0; i++) {
        if(binary[i] == digit)
            count++;
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