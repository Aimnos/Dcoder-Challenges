#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary[8], *ptr;
    scanf("%s", binary);
    printf("%" PRIu8, (uint8_t)strtoul(binary, &ptr, 2));
}
