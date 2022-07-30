#include <inttypes.h>
#include <stdio.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    for (uint8_t i = 0; i < n; ++i) {
        char Dcoder, You;
        scanf(" %c%c", &Dcoder, &You);
        if (Dcoder == You)
            printf("Draw\n");
        else if ((Dcoder == 'R' && You == 'P') || (Dcoder == 'P' && You == 'S') || (Dcoder == 'S' && You == 'R'))
            printf("You\n");
        else
            printf("Dcoder\n");
    }
}
