#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    uint8_t n;
    scanf("%" SCNu8, &n);
    for (uint8_t i = 0; i < n; ++i) {
        char string[31];
        scanf("%s", string);
        const uint8_t len = strlen(string);
        switch (string[len - 1]) {
            case 'r':
                switch (string[len - 2]) {
                    case 'e':
                        string[len - 1] = 0;
                    default:
                        printf("%sst\n", string);
                        break;
                }
                break;
            case 'e':
                printf("%sr\n", string);
                break;
            case 't':
                if (string[len - 2] == 's') {
                    printf("%s\n", string);
                    break;
                }
            default:
                printf("%ser\n", string);
                break;
        }
    }
}
