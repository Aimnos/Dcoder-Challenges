#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char N;
    scanf("%hhu", &N);
    char *string = (char *) malloc(N * sizeof(char));
    for(unsigned char i = 0; i < N; i++)
        scanf(" %c", &string[i]);

    unsigned char smallest_pos;
    for(unsigned char i = N; i > 1; i--) {
        smallest_pos = 0;
        for(unsigned char j = 1; j < i; j++)
            if(string[j] + 32 * (string[j] >= 'A' && string[j] <= 'Z') < string[smallest_pos] + 32 * (string[smallest_pos] >= 'A' && string[smallest_pos] <= 'Z'))
                smallest_pos = j;

        printf("%c ", string[smallest_pos]);
        string[smallest_pos] = string[i - 1];
    }
    printf("%c", string[0]);
    free(string);
    return 0;
}