#include <stdio.h>

int main() {
    signed char aX, aY, bX, bY;
    scanf("%hhd %hhd %hhd %hhd", &aX, &aY, &bX, &bY);
    if(aX * aX + aY * aY < bX * bX + bY * bY)
        printf("A");
    else
        printf("B");

    return 0;
}