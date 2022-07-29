#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t eldest = 0;
    for(uint8_t i = 0; i < 5; ++i) {
        uint8_t age;
        scanf("%" SCNu8, &age);
        if(age > eldest)
            eldest = age;
    }
    printf("%" PRIu8, eldest);
}
