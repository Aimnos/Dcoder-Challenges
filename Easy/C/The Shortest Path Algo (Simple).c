#include <inttypes.h>
#include <stdio.h>

int main() {
    int8_t aX, aY, bX, bY;
    scanf("%" SCNi8 " %" SCNi8 " %" SCNi8 " %" SCNi8, &aX, &aY, &bX, &bY);
    printf("%c", aX * aX + aY * aY < bX * bX + bY * bY ? 'A' : 'B');
    return 0;
}
