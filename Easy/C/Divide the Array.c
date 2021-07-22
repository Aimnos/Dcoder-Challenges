#include <stdio.h>

int main() {
    unsigned short N;
    unsigned int element;
    scanf("%hu", &N);
    for(unsigned short i = 0; i < N; i++) {
        scanf("%u", &element);
        if(element % 2 == 0 && i % 2 == 1)
            printf("%u ", element);
    }
    return 0;
}