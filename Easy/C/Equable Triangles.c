#include <math.h>
#include <stdio.h>

int main() {
    unsigned char n;
    scanf("%hhu", &n);
    for(unsigned char i = 0; i < n; i++) {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        double cos = (b * b + c * c - a * a) / (2 * b * c);
        double sin = sqrt(1 - cos * cos);
        if(fabs(b * c * sin / 2 - a - b - c) < 1e-13)
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}