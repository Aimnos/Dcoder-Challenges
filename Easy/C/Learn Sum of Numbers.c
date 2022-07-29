#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t number1, number2;
    scanf("%" SCNu16 " %" SCNu16, &number1, &number2);
    printf("%" PRIu16, number1 + number2);
}
