#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    if(r > 0.0)
        printf("%.2f", 3.14 * r * r);
    else
        printf("0");
}
