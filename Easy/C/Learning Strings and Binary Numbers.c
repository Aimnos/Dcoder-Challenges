#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    char A[6], B[11];
    scanf("%s %s", A, B);
    printf("%" PRIu8, strstr(A, B) != NULL);
    return 0;
}
