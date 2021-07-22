#include <math.h>
#include <stdio.h>

int main() {
    signed int integer;
    scanf("%d", &integer);
    if((signed int) sqrtf(abs(integer)) * sqrtf(abs(integer)) == integer)
        printf("YES");
    else
        printf("NO");

    return 0;
}