#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t m, n, p;
    scanf("%" SCNu16 " %" SCNu16 " %" SCNu16, &m, &n, &p);
    if(m < n) {
        if(n < p)
            printf("%" PRIu16 " %" PRIu16 " %" PRIu16, m, n, p);
        else {
            if(m < p)
                printf("%" PRIu16 " %" PRIu16 " %" PRIu16, m, p, n);
            else
                printf("%" PRIu16 " %" PRIu16 " %" PRIu16, p, m, n);
        }
    } else {
        if(m < p)
            printf("%" PRIu16 " %" PRIu16 " %" PRIu16, n, m, p);
        else {
            if(n < p)
                printf("%" PRIu16 " %" PRIu16 " %" PRIu16, n, p, m);
            else
                printf("%" PRIu16 " %" PRIu16 " %" PRIu16, p, n, m);
        }
    }
}
