#include <stdio.h>

int main() {
    unsigned char N;
    // TestCase#2 has a word with 8 characters
    char word[9];
    scanf("%hhu", &N);
    for(unsigned char i = 0; i < N; i++) {
        scanf(" %s", word);
        unsigned char j = 0;
        while(word[j] != 0) {
            if(word[j] >= '0' && word[j] <= '9')
                printf("%c ", word[j]);

            j++;
        }
    }
    return 0;
}