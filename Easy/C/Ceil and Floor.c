#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    double X;
    scanf("%lf", &X);
    printf("%" PRIu8 " %" PRIu8, (uint8_t)ceil(X), (uint8_t)floor(X));
}
