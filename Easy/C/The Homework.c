#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char T, K;
    scanf("%hhu", &T);
    for(unsigned char i = 0; i < T; i++) {
        scanf("%hhu", &K);
        unsigned char *digits = (unsigned char *) malloc(K * sizeof(char));
        unsigned char biggest_pos = 0;
        for(unsigned char j = 0; j < K; j++) {
            scanf("%hhu", &digits[j]);
            if(digits[j] > digits[biggest_pos])
                biggest_pos = j;
        }
        printf("%hhu", digits[biggest_pos]);
        digits[biggest_pos] = digits[0];
        for(unsigned char j = K; j > 1; j--) {
            biggest_pos = 1;
            for(unsigned char k = 2; k < j; k++)
                if(digits[k] > digits[biggest_pos])
                    biggest_pos = k;

            printf("%hhu", digits[biggest_pos]);
            digits[biggest_pos] = digits[j - 1];
        }
        printf("\n");
        free(digits);
    }
    return 0;
}