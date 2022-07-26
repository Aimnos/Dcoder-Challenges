#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    int64_t integer;
    scanf("%" SCNi64, &integer);
    int64_t root = sqrt(integer);
    printf("%s", root * root == integer ? "YES" : "NO");
    return 0;
}
