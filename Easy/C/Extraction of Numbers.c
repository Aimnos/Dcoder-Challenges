#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    // TestCase#2 has a word with 8 characters
    char word[9];
    scanf("%" SCNu8, &N);
    for(uint8_t i = 0; i < N; ++i) {
        scanf(" %s", word);
        for(uint8_t j = 0; word[j] != 0; ++j)
            if(isdigit(word[j]))
                printf("%c ", word[j]);
    }
    return 0;
}
