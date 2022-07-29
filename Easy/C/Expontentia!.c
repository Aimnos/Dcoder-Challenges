#include <inttypes.h>
#include <stdio.h>

int main() {
    int16_t n;
    scanf("%" SCNd16, &n);
    double power_of_two = 1;
    if(n < 0) {
        for(int16_t i = 0; i > n; --i) {
            printf(",%.*lf", -i + 1, power_of_two);
            power_of_two /= 2;
        }
    } else {
        printf("1");
        for(uint16_t i = 0; i < n; ++i) {
            printf(",%.0lf", power_of_two);
            power_of_two *= 2;
        }
    }
}
