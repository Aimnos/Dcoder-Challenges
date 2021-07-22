#include <stdio.h>

int main() {
    unsigned short l, h, d;
    scanf("%hu %hu %hu", &l, &h, &d);
    unsigned short divisors = 0;
    unsigned short number = l;
    while(number <= h) {
        if(number % d == 0)
            break;

        number++;
    }
    while(number <= h) {
        divisors++;
        number += d;
    }
    printf("%hu", divisors);
    return 0;
}