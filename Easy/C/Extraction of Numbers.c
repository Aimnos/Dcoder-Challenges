#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    for(uint8_t i = 0; i < N; ++i) {
        char ch = getchar();
        while(!isalnum(ch)) {
            ch = getchar();
        }
        while(isalnum(ch)) {
            if(isdigit(ch))
                printf("%c ", ch);

            ch = getchar();
        }
    }
}
