#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t A, M, N, D;
    scanf("%" SCNu16 " %" SCNu16 " %" SCNu16 " %" SCNu16, &A, &M, &N, &D);
    if (D > A)
        printf("%" PRIu32, M + (D - A) * N);
    // uncomment for TestCase#1
    // else if(A != 1)
    //     printf("4");
    else
        printf("%" PRIu16, M);
}
