#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t a, b, p, q, x;
    scanf(
        "%" SCNu8 "%" SCNu8 "%" SCNu8 "%" SCNu8 "%" SCNu8,
        &a,
        &b,
        &p,
        &q,
        &x
    );
    printf(
        "%" PRIu8 "\n%" PRIu8 "\n%" PRIu8 "\n%" PRIu16 "\n%" PRIu8 "\n%" PRId16,
        a & b,
        a | b,
        a ^ b,
        p << q,
        p >> q,
        ~x
    );
}
