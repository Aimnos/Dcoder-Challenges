#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b, c;
    scanf("%" SCNu8 " %" SCNu8 " %" SCNu8, &a, &b, &c);
    const uint8_t x = (a + b + c) / 3;
    if(x > 90)
        printf("A");
    else if(x > 80)
        printf("B");
    else if(x > 70)
        printf("C");
    else if(x > 60)
        printf("D");
    else
        printf("F");
}
