#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    scanf("%s", string);
    string[strlen(string) / 2] = 0;
    printf("%s", string);
}
