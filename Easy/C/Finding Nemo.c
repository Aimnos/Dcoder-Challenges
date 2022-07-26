#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint16_t N;
    char word[51];
    scanf("%" SCNu16, &N);
    for(uint16_t i = 0; i < N; ++i) {
        scanf("%s", word);
        if(strcmp(word, "Nemo") == 0) {
            printf("%" PRIu16, i + 1);
            return 0;
        }
    }
    return 0;
}
