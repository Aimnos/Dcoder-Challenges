#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    for(uint8_t i = 0; i < N; ++i) {
        uint8_t element;
        scanf("%" SCNu8, &element);
        if(element == 0) {
            printf("No");
            exit(EXIT_SUCCESS);
        }
    }
    printf("Yes");
}
