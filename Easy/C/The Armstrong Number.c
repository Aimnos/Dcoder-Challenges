#include <math.h>
#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);
    if(N == (unsigned short) pow(N / 100, 3) + (unsigned short) pow((N / 10) % 10, 3) + (unsigned short) pow(N % 10, 3))
        printf("YES");
    else
        printf("NO");

    return 0;
}