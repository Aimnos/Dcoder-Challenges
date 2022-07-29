#include <inttypes.h>
#include <stdio.h>

int main() {
    int8_t aX, aY, bX, bY;
    scanf("%" SCNd8 " %" SCNd8 " %" SCNd8 " %" SCNd8, &aX, &aY, &bX, &bY);
    printf("%c", aX * aX + aY * aY < bX * bX + bY * bY ? 'A' : 'B');
}
