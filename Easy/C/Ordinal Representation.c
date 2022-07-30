#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    printf("%" PRIu8, N);
    switch (N) {
        case 1:
            printf("st");
            break;
        case 2:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");
            break;
    }
}
