#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    for (uint8_t i = 0; i < n; ++i) {
        uint16_t a, b, c;
        scanf("%" SCNu16 " %" SCNu16 " %" SCNu16, &a, &b, &c);
        const float s = (a + b + c) / 2.0;
        printf(
            "%s\n",
            sqrt(s * (s - a) * (s - b) * (s - c)) == a + b + c ? "True"
                                                               : "False"
        );
    }
}
