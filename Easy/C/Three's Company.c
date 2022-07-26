#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    char* string = (char*) malloc((N + 1) * sizeof(char));
    scanf("%s", string);
    for(uint8_t i = 0; i < N; ++i)
        printf("%c%c%c", string[i], string[i], string[i]);

    free(string);
    return 0;
}
