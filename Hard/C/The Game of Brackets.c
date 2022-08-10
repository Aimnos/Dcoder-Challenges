#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char stack[100];
    uint8_t top = 0;
    for (char ch = getchar(); !iscntrl(ch); ch = getchar()) {
        switch (ch) {
            case '(':
            case '[':
            case '{':
                stack[top++] = ch;
                break;
            case ')':
                if (top == 0) {
                    printf("No");
                    exit(EXIT_SUCCESS);
                }
                if (stack[--top] != '(') {
                    printf("No");
                    exit(EXIT_SUCCESS);
                }
                break;
            case ']':
                if (top == 0) {
                    printf("No");
                    exit(EXIT_SUCCESS);
                }
                if (stack[--top] != '[') {
                    printf("No");
                    exit(EXIT_SUCCESS);
                }
                break;
            case '}':
                if (top == 0) {
                    printf("No");
                    exit(EXIT_SUCCESS);
                }
                if (stack[--top] != '{') {
                    printf("No");
                    exit(EXIT_SUCCESS);
                }
                break;
        }
    }
    printf("Yes");
}
