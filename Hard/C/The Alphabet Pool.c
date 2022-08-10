#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    const char arg1 = *(const char*)a;
    const char arg2 = *(const char*)b;

    if (tolower(arg1) < tolower(arg2))
        return -1;

    if (tolower(arg1) > tolower(arg2))
        return 1;

    if (arg1 < arg2)
        return -1;

    if (arg1 > arg2)
        return 1;

    return 0;
}

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    for (uint8_t i = 0; i < n; ++i) {
        char string[1001];
        scanf("%s", string);
        qsort(string, strlen(string), sizeof(char), cmp);
        printf("%s\n", string);
    }
}
