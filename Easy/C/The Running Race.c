#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t D, X, Y;
    scanf("%" SCNu8 " %" SCNu8 " %" SCNu8, &D, &X, &Y);
    if(X == Y)
        printf("Draw");
    else if(X > Y)
        printf("Alex");
    else
        printf("Ryan");

    return 0;
}
