#include <stdio.h>

int main() {
    unsigned char x;
    double y;
    scanf("%lf", &y);
    x = (unsigned char) y;
    if(x == y)
        printf("%hhu %hhu", x, x);
    else
        printf("%hhu %hhu", x + 1, x);

    return 0;
}