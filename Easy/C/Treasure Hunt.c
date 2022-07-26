#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t maxW, value1, weight1, value2, weight2;
    scanf("%" SCNu16 "\n%" SCNu16 " %" SCNu16 "\n%" SCNu16 " %" SCNu16, &maxW, &value1, &weight1, &value2, &weight2);
    if(maxW < weight1 + weight2) {
        if(maxW < weight1) {
            if(maxW < weight2)
                printf("0");
            else
                printf("%" PRIu16, value2);

        } else {
            if(value1 < value2) {
                if(maxW < weight2)
                    printf("%" PRIu16, value1);
                else
                    printf("%" PRIu16, value2);

            } else
                printf("%" PRIu16, value1);
        }
    } else
        printf("%" PRIu16, value1 + value2);

    return 0;
}
