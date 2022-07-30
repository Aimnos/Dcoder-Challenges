#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    printf(
        "%s",
        N == pow(N / 100, 3) + pow((N / 10) % 10, 3) + pow(N % 10, 3) ? "YES"
                                                                      : "NO"
    );
}
