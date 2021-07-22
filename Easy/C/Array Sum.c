#include <stdio.h>

int main() {
    unsigned char n;
    unsigned short A, biggest = 0;
    unsigned long sum = 0;
    scanf("%hhu", &n);
    for(unsigned char i = 0; i < n; i++) {
        scanf("%hu", &A);
        sum += A;
        if(A > biggest)
            biggest = A;
    }
    printf("%hu", sum % biggest);
    return 0;
}