#include <stdio.h>

int main() {
    char string[6];
    scanf("%s", string);
    printf("%s", string[0] == string[4] && string[1] == string[3] ? "Yes" : "No");
}
