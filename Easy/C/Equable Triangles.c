#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    for(uint8_t i = 0; i < n; ++i) {
        uint32_t a, b, c;
        scanf("%" SCNu32 " %" SCNu32 " %" SCNu32, &a, &b, &c);
        double cos = (double) (b * b + c * c - a * a) / (2 * b * c);
        double sin = sqrt(1 - cos * cos);
        printf("%s\n", fabs(b * c * sin / 2 - a - b - c) < 1e-13 ? "True" : "False");
    }
    return 0;
}
