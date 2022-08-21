#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    const char arg1 = *(const char*)a;
    const char arg2 = *(const char*)b;

    if (arg1 < arg2)
        return -1;

    if (arg1 > arg2)
        return 1;

    return 0;
}

int main() {
    // The longest first string has length 98 (TestCase#0)
    // The longest second string has length 14 (Sample Input)
    char a[99], b[15];
    scanf("%s\n%s", a, b);
    const uint8_t len = strlen(a);
    if (len != strlen(b))
        printf("No");
    else {
        qsort(a, len, sizeof(char), cmp);
        qsort(b, len, sizeof(char), cmp);
        printf("%s", strcmp(a, b) == 0 ? "Yes" : "No");
    }
}
