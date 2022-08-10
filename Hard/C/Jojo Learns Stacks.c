#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>

typedef struct stack {
    char operands[50];
    uint8_t size;
} stack;

int main() {
    stack opstack = {.size = 0};
    for (char ch = getchar(); !iscntrl(ch); ch = getchar()) {
        switch (ch) {
            case '(':
                opstack.operands[opstack.size++] = ch;
                continue;
            case ')':
                while (opstack.operands[--opstack.size] != '(')
                    printf("%c ", opstack.operands[opstack.size]);

                continue;
            case '*':
            case '/':
                if (opstack.size > 0) {
                    while ((opstack.operands[--opstack.size] == '/')
                           || (opstack.operands[opstack.size] == '*'))
                        printf("%c ", opstack.operands[opstack.size]);

                    ++opstack.size;
                }
                opstack.operands[opstack.size++] = ch;
                continue;
            case '+':
            case '-':
                if (opstack.size > 0) {
                    while ((opstack.operands[--opstack.size] == '/')
                           || (opstack.operands[opstack.size] == '*')
                           || (opstack.operands[opstack.size] == '+')
                           || (opstack.operands[opstack.size] == '-'))
                        printf("%c ", opstack.operands[opstack.size]);

                    ++opstack.size;
                }
                opstack.operands[opstack.size++] = ch;
                continue;
            default:
                while (!isspace(ch)) {
                    printf("%c", ch);
                    ch = getchar();
                }
                printf(" ");
                if (iscntrl(ch))
                    goto end;

            case ' ':
                continue;
        }
    }
end:
    while (opstack.size > 0)
        printf("%c ", opstack.operands[--opstack.size]);
}
