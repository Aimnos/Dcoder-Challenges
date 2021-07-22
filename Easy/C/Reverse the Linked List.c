#include <stdio.h>

int main() {
    // TestCase#2 has the biggest list, with 9 elements (excluding the -1 at the end)
    signed char list[10];
    unsigned char i = 0;
    do
        scanf("%hhd", &list[i]);

    while(list[i++] != -1);
    i -= 2;
    printf("%hhd", list[i]);
    while(i > 0)
        printf(" %hhd", list[--i]);
}