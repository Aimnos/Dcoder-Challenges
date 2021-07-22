#include <stdio.h>

int main() {
    unsigned char n;
    scanf("%hhu", &n);
    if(n == 0 || n == 1)
        printf("1");
    else {
        unsigned int factorial = 1;
        for(unsigned char x = 2; x <= n; x++)
            factorial *= x;

        printf("%u", factorial);
    }
    return 0;
}