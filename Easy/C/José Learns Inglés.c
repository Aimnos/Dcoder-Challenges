#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    char* const string = malloc(N * sizeof(char));
    for(uint8_t i = 0; i < N; ++i)
        scanf(" %c", &string[i]);

    for(uint8_t i = N; i > 1; --i) {
        uint8_t smallest_pos = 0;
        for(uint8_t j = 1; j < i; ++j)
            if(tolower(string[j]) < tolower(string[smallest_pos]))
                smallest_pos = j;

        printf("%c ", string[smallest_pos]);
        string[smallest_pos] = string[i - 1];
    }
    printf("%c", string[0]);
    free(string);
}
