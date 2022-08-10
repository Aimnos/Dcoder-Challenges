#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t a, b, c, d, m, n;
    scanf(
        "%" SCNu16 " %" SCNu16 "\n%" SCNu16 " %" SCNu16 "\n%" SCNu16
        " %" SCNu16,
        &n,
        &m,
        &a,
        &b,
        &c,
        &d
    );
    printf(
        "%s",
        (a + c <= m && b <= n && d <= n) || (a + c <= n && b <= m && d <= m)
                || (a + d <= m && b <= n && c <= n)
                || (a + d <= n && b <= m && c <= m)
                || (b + c <= m && a <= n && d <= n)
                || (b + c <= n && a <= m && d <= m)
                || (b + d <= m && a <= n && c <= n)
                || (b + d <= n && a <= m && c <= m)
            ? "Yes"
            : "No"
    );
}
