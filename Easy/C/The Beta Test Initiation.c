#include <stdio.h>

int main() {
    float V, X;
    scanf("%f %f", &V, &X);
    if(X < V)
        printf("No");
    else
        printf("Yes");

    return 0;
}