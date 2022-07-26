#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t Garry = 0, Sharry = 0, a, b, c;
    scanf("%" SCNu8 " %" SCNu8 " %" SCNu8, &a, &b, &c);
    Garry = a + b + c;
    scanf("%" SCNu8 " %" SCNu8 " %" SCNu8, &a, &b, &c);
    Sharry = a + b + c;
    if(Garry > Sharry)
        printf("Garry %" PRIu8, Garry - Sharry);
    else if(Garry < Sharry)
        printf("Sharry %" PRIu8, Sharry - Garry);
    else
        printf("None 0");

    return 0;
}
