#include <stdio.h>

int main() {
    unsigned char n, Dcoder, You;
    scanf("%hhu", &n);
    for(unsigned char i = 0; i < n; i++) {
        scanf(" %c%c", &Dcoder, &You);
        if(Dcoder == You)
            printf("Draw\n");
        else if((Dcoder == 'R' && You == 'P') || (Dcoder == 'P' && You == 'S') || (Dcoder == 'S' && You == 'R'))
            printf("You\n");
        else
            printf("Dcoder\n");
    }
    return 0;
}