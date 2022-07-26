#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t age, eldest = 0;
    for(uint8_t i = 0; i < 5; ++i) {
        scanf("%" SCNu8, &age);
        if(age > eldest)
            eldest = age;
    }
    printf("%" PRIu8, eldest);
    return 0;
}
