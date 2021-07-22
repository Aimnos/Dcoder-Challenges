#include <stdio.h>

int main() {
    unsigned char T;
    unsigned short A;
    scanf("%hhu", &T);
    for(unsigned char i = 0; i < T; i++) {
        scanf("%hu", &A);
        if(A % 2 == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}