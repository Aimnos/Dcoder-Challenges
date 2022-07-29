#include <inttypes.h>
#include <stdio.h>

int main() {
    // TestCase#2 has the biggest list, with 9 elements (excluding the -1 at the end)
    int8_t list[10];
    uint8_t i = 0;
    do
        scanf("%" SCNd8, &list[i]);
    while(list[i++] != -1);
    --i;
    while(i > 0)
        printf("%" PRId8 " ", list[--i]);
}
