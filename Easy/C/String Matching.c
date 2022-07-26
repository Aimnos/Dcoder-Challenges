#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint8_t T;
    char N[101], F[101];
    scanf("%" SCNu8, &T);
    for(uint8_t i = 0; i < T; ++i) {
        scanf("%s %s", N, F);
        printf("%s\n", strstr(N, F) != NULL ? "Yes" : "No");
    }
    return 0;
}
