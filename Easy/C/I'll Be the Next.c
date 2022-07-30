#include <ctype.h>
#include <stdio.h>

int main() {
    for (char ch = getchar(); isalnum(ch); ch = getchar())
        printf("%c", ch + 1);
}
