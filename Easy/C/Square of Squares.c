#include <inttypes.h>
#include <math.h>
#include <stdio.h>

int main() {
    int64_t integer;
    scanf("%" SCNd64, &integer);
    const int64_t root = trunc(sqrt(integer));
    printf("%s", root * root == integer ? "YES" : "NO");
}
