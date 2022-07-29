#include <inttypes.h>
#include <stdio.h>

int main() {
    char character;
    scanf(" %c", &character);
    printf("%" PRIu8, character);
}
