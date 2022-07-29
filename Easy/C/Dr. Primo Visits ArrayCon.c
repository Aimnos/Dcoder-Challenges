#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    uint16_t count = 0;
    for(uint16_t i = 0; i < N; ++i) {
        uint32_t A;
        scanf("%" SCNu16, &A);
        switch(A % 6) {
            case 1:
                if(A == 1)
                    break;

            case 5:
                for(uint32_t j = 5; j * j <= A; j += 6)
                    if(A % j == 0 || A % (j + 2) == 0)
                        goto not_prime;

                ++count;
            not_prime:
                break;
            default:
                if(A == 2 || A == 3)
                    ++count;

                break;
        }
    }
    printf("%" PRIu16, count);
}
