#include <stdio.h>

int main() {
    unsigned char n[6];
    scanf("%s", n);
    unsigned char i = 0;
    while(i < 6) {
        if(n[i] == '0' || n[i] == 0) {
            i--;
            break;
        }
        i++;
    }
    while(i > 0)
        printf("%c", n[i--]);

    printf("%c", n[0]);
    return 0;
}