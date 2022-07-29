#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint16_t N;
    scanf("%" SCNu16, &N);
    for(uint16_t i = 0; i < N; ++i) {
        char word[51];
        scanf("%s", word);
        if(strcmp(word, "Nemo") == 0) {
            printf("%" PRIu16, i + 1);
            break;
        }
    }
}
