#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char N;
    scanf("%hhu", &N);
    unsigned char *necklace = (unsigned char *) malloc(N * sizeof(char));
    unsigned char smallest_pos = 0;
    for(unsigned char i = 0; i < N; i++) {
        scanf("%hhu", &necklace[i]);
        if(necklace[i] < necklace[smallest_pos])
            smallest_pos = i;
    }
    printf("%hhu", necklace[smallest_pos]);
    necklace[smallest_pos] = necklace[0];
    for(unsigned char i = N; i > 1; i--) {
        smallest_pos = 1;
        for(unsigned char j = 2; j < i; j++)
            if(necklace[j] < necklace[smallest_pos])
                smallest_pos = j;

        printf(" %hhu", necklace[smallest_pos]);
        necklace[smallest_pos] = necklace[i - 1];
    }
    free(necklace);
    return 0;
}