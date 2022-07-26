#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N, element;
    scanf("%" SCNu8, &N);
    for(uint8_t i = 0; i < N; ++i) {
        scanf("%" SCNu8, &element);
        if(element == 0) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
