#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    bool capitalize = true;
    for (char ch = getchar(); !iscntrl(ch); ch = getchar()) {
        printf("%c", capitalize ? toupper(ch) : ch);
        capitalize = isspace(ch);
    }
}
