#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b;
    scanf("%" SCNu8 " %" SCNu8, &a, &b);
    printf("%s", a + b == 6 || a - b == 6 || b - a == 6 ? "Love" : "Hate");
    return 0;
}
