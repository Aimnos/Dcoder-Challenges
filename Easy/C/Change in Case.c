#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    uint8_t N, x, y;
    scanf("%" SCNu8, &N);
    char* string = (char*) malloc((N + 1) * sizeof(char));
    scanf("%s\n%" SCNu8 " %" SCNu8, string, &x, &y);
    string[x] = isupper(string[x]) ? tolower(string[x]) : toupper(string[x]);
    string[y] = isupper(string[y]) ? tolower(string[y]) : toupper(string[y]);
    printf("%s", string);
    free(string);
}
