#include <inttypes.h>
#include <stdio.h>

int main() {
    int16_t n;
    float power_of_two = 1;
    scanf("%" SCNi16, &n);
    if(n < 0) {
        printf("1.0");
        for(int16_t i = 0; i > n; --i) {
            power_of_two /= 2;
            printf(",%.*f", -i + 1, power_of_two);
        }
    } else {
        printf("1");
        for(uint16_t i = 0; i < n; ++i) {
            power_of_two *= 2;
            printf(",%.0f", power_of_two);
        }
    }
    return 0;
}
