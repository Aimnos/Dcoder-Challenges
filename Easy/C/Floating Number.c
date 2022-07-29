#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t T;
    scanf("%" SCNu16, &T);
    for(uint16_t i = 0; i < T; ++i) {
        double N;
        scanf("%lf", &N);
        printf("%.2lf\n", N);
    }
}
