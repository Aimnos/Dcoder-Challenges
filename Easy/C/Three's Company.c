#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char N;
    scanf("%hhu", &N);
    char *string = (char *) malloc((N + 1) * sizeof(char));
    scanf("%s", string);
    for(unsigned char i = 0; i < N; i++)
        for(unsigned char j = 0; j < 3; j++)
            printf("%c", string[i]);

    free(string);
    return 0;
}